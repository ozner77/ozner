#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> T;
vector<int> A;
void build(int i, int l, int r) {
    if (l == r) {
        T[i] = A[l];
        return;
    }
    int mid = (l + r) / 2;
    build(2 * i, l, mid);
    build(2 * i + 1, mid + 1, r);
    T[i] = T[2 * i] + T[2 * i + 1]; 
}
void update(int i, int l, int r, int pos, ll val) {
    if (l == r) {
        T[i] = val; 
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) update(2 * i, l, mid, pos, val);
    else update(2 * i + 1, mid + 1, r, pos, val);
    T[i] = T[2 * i] + T[2 * i + 1];
}
void update2(int i, int l, int r, int pos, ll val) {
    if (l == r) {
        T[i] += val; 
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) update2(2 * i, l, mid, pos, val);
    else update2(2 * i + 1, mid + 1, r, pos, val);
    T[i] = T[2 * i] + T[2 * i + 1];
}
ll query(int i, int l, int r, int ql, int qr) {
    if (qr < l || ql > r) return 0;
    if (ql <= l && r <= qr) return T[i];
    int mid = (l + r) / 2;
    return query(2 * i, l, mid, ql, qr) + query(2 * i + 1, mid + 1, r, ql, qr);
}
ll count_swaps(vector<int> S){
    ll ans=0;
    int n=S.size();
    vector<int> existe(n,1);
    A.assign(n,1);
    T.resize(4*n);
    build(1,0,n-1);
    map<int,set<int>> M;
    for(int i=0;i<n;i++){
        M[S[i]].insert(i);
    }
    for(int i=0;i<n;i++){
        if(!existe[i]){
            continue;
        }
        int j=*M[-S[i]].begin();
        M[S[i]].erase(i);
        M[-S[i]].erase(j);
        existe[i]=0;
        existe[j]=0;
        ans+=query(1,0,n-1,i,j)-2;
        update(1,0,n-1,i,2);
        update(1,0,n-1,j,0);
        if(S[i]>0){
            ans++;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> V;
    for(int i=0;i<2*n;i++){
        int a;
        cin>>a;
        V.push_back(a);
    }
    cout<<count_swaps(V);
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,l,r,m;
    cin>>a;
    vector<vector<long long>> V;
    vector<long long> xd(a,0);
    vector<long long> res(a,0);
    long long con=0;
    while(a--){
        cin>>b>>c;
        c=b+c;
        vector<long long> V1;
        V1.push_back(b);
        V1.push_back(c);
        V1.push_back(con);
        V.push_back(V1);
        con++;
    }
    sort(V.begin(),V.end());
    xd[0]=V[0][1];
    res[V[0][2]]=0;
    con=0;
    for(auto x:V){
        long long uwu=x[1];
        l=0;
        r=xd.size()-1;
        while (l <= r) {
            m = l + (r - l) / 2;
            if (xd[m] > uwu) {
                r = m + 1;
            } else {
                r = m - 1;
            }
        }
        if(uwu>=xd[m]){
            cout<<m;
            xd[m]=uwu;
            res[V[con][2]]=m;
        }
        con++;
    }
    for(auto x:res){
        cout<<x;
    }
}
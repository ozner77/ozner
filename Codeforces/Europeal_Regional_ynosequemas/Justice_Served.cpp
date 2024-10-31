#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,l,r,m;
    cin>>a;
    vector<vector<long long>> V;
    vector<long long> xd;
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
    sort(V.begin(), V.end(), [](vector<long long> a,vector<long long> b) {
        if (a[0] != b[0]) {
            return a[0] < b[0];
        }
        return a[1] > b[1];
    });
    xd.push_back(V[0][1]);
    res[V[0][2]]=0;
    con=0;
    for(auto x:V){
        if(con!=0){
        long long l=0,r=xd.size()-1;
        long long m;
        while (l <= r) {
            m = l + (r - l) / 2;
            if (xd[m] == x[1]) {
                l = m + 1;
            }   
            else if (xd[m]>x[1]){
                l=m+1;
            } else {
                r=m-1;
            }
        }
        if(x[1]>xd[m]){
            xd[m]=x[1];
            res[x[2]]=m;
        }else if(m==xd.size()-1){
            xd.push_back(x[1]);
            res[x[2]]=xd.size()-1;
        }else{
            xd[m+1]=x[1];
            res[x[2]]=m+1;
        }
        }
        con++;
    }
    for(auto x:res){
      cout<<x<<" ";
    }
}
//AL FIN JUSTICE SERVED
//muchas gracias ming :D
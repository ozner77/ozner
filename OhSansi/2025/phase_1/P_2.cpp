#include <bits/stdc++.h>
using namespace std;
int LIS(vector<int> a) {
    vector<int> dp;
    for (int x:a) {
        auto xd=lower_bound(dp.begin(),dp.end(),x);
        if(xd==dp.end())
            dp.push_back(x);
        else
            *xd=x;
    }
    return dp.size();
}
int main(){
    int n;
    cin>>n;
    vector<int> V;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        V.push_back(a);
    }
    int ans=LIS(V);
    cout<<ans;
}
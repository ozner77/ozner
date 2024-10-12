#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long a,b;
    vector<pair<long long,long long>> V;
    int array[a];
    int array2[a];
    cin>>a;
    for(long long i=0;i<a;i++){
        cin>>b;
        V.push_back(make_pair(b,i));
        array[i]=b;
    }
    sort(V.begin(),V.end());
    for(auto x:V){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    cout<<array[0];
}
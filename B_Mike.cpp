#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    long long a,b;
    vector<pair<long long,long long>> V;
    cin>>a;
    long long array[a];
    long long array2[a]={0};
    for(int i=0;i<a;i++){
        cin>>b;
        V.push_back(make_pair(b,i));
        array[i]=b;
    }
    sort(V.begin(),V.end());
    reverse(V.begin(),V.end());
    long long respuesta[a];
    long long con=1;
    respuesta[0]=V[0].first;
    array2[V[0].second]=1;
    for(int i=1;i<V.size();i++){
        array2[V[i].second]=1;
        if(V[i].second==0){
            if(array2[V[i].second+1]==1){
                respuesta[con]=V[i].first;
                con++;
            }else{
                V.push_back(make_pair(V[a-1].first,V[a-1].second));
            }
        }else if(V[i].second==a-1){
            if(array2[V[i].second-1]==1){
                respuesta[con]=V[i].first;
                con++;
            }else{
                V.push_back(make_pair(V[a-1].first,V[a-1].second));
            }
        }else{
            if(array2[V[i].second+1]==1 || array2[V[i].second-1]==1){
                respuesta[con]=V[i].first;
                con++;
            }else{
                V.push_back(make_pair(V[a-1].first,V[a-1].second));
            }
        }
    }
    for(auto x:respuesta){
        cout<<x<<" ";
    }
}
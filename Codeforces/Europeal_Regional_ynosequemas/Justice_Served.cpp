/*#include <bits/stdc++.h>
using namespace std;
vector<long long> dp(vector<long long> respuesta){

}
int main(){
    long long t,n,m;
    cin>>t;
    vector<pair<long long,long long>> V;
    while(t--){
        cin>>n>>m;
        V.push_back(make_pair(n,m));
    }
    vector<long long> respuesta;
    for(int i=0;i<V.size();i++){
        long long holiwi=V[i].first;
        long long estonoesasi=V[i].second;
        long long res=0;
        for(int j=0;j<V.size();j++){
            if(j!=i){
            long long xd=V[j].first;
            long long lol=V[j].second;
            if(holiwi>=xd){
                if(holiwi+estonoesasi<=xd+lol){
                    res++;
                }
            }
            }
        }
        respuesta.push_back(res);
    }
    vector<long long> respuestareal=dp();
}
pipipi, mejor me voy a hacer horoscope matrix...
*/
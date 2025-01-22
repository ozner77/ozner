#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll filas,columnas,M;
    ll Op,lugar,color;
    cin>>filas>>columnas>>M;
    vector<vector<ll>> V;
    while(M--){
        vector<ll> L;
        cin>>Op>>lugar>>color;
        L.push_back(Op);
        L.push_back(lugar);
        L.push_back(color);
        V.push_back(L);
    }
    reverse(V.begin(),V.end());
    ll filas_definitivas=0;
    ll columnas_definitivas=0;
    map<ll,ll> respuesta;
    map<ll,ll> visitados_filas;
    map<ll,ll> visitados_columnas;
    for(auto x:V){
        if(x[0]==1){
            if(visitados_filas[x[1]]==0){
                visitados_filas[x[1]]++;
                respuesta[x[2]]+=columnas-columnas_definitivas;
                filas_definitivas++;
            }
        }else{
            if(visitados_columnas[x[1]]==0){
                visitados_columnas[x[1]]++;
                respuesta[x[2]]+=filas-filas_definitivas;
                columnas_definitivas++;
            }
        }
    }
    ll res=0;
    ll res2=0;
    bool haycero=false;
    for(auto x:respuesta){
        if(x.second>0){
            res2+=x.second;
            res++;
            if(x.first==0){
                haycero=true;
            }
        }
    }
    if(res2!=filas*columnas){
        if(!haycero){
            res++;
        }
        respuesta[0]+=(filas*columnas)-res2;
    }
    cout<<res<<"\n";
    for(auto x:respuesta){
        if(x.second>0){
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }
}
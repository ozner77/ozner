#include <bits/stdc++.h>
using namespace std;
class nomesalexd {
    vector<int> rp;
    vector<int> r;
    vector<int> tamano;
    public:
    nomesalexd(long long lol) {
        rp.resize(lol);
        r.resize(lol, 0);
        tamano.resize(lol, 1);
        for (long long i = 0; i < lol; i++) {
            rp[i] = i;
        }
    }
    int find(long long x) {
        if (rp[x] != x) {
            rp[x] = find(rp[x]);
        }
        return rp[x];
    }
    void unir(long long x, long long y) {
        int rx = find(x);
        int ry = find(y);
        if (rx != ry) {
            if (r[rx] < r[ry]) {
                rp[rx] = ry;
                tamano[ry] += tamano[rx];
            } else if (r[rx] > r[ry]) {
                rp[ry] = rx;
                tamano[rx] += tamano[ry];
            } else {
                rp[ry] = rx;
                r[rx]++;
                tamano[rx] += tamano[ry];
            }
        }
    }
    int tamanio(long long x) {
        return tamano[find(x)];
    }
};
int main(){
    long long a,b;
    vector<pair<long long,long long>> V;
    cin>>a;
    nomesalexd xd(a);
    long long array2[a]={0};
    for(long long i=0;i<a;i++){
        scanf("%lli",&b);
        V.push_back(make_pair(b,i));
    }
    sort(V.rbegin(),V.rend());
    vector<long long> respuesta;
    long long k=2;
    long long indice=1;
    array2[V[0].second]=1;
    respuesta.push_back(V[0].first);
    while(k<=a){
        array2[V[indice].second]=1;
        if(V[indice].second-1>=0){
            if(array2[V[indice].second-1]==1){
                xd.unir(V[indice].second-1,V[indice].second);
            }
        }
        if(V[indice].second+1<a){
            if(array2[V[indice].second+1]==1){
                xd.unir(V[indice].second+1,V[indice].second);
            }
        }
        long long matenme=xd.tamanio(V[indice].second);
        while(matenme>=k){
            respuesta.push_back(V[indice].first);
            k++;
        }
        indice++;
    }
    for(auto x:respuesta){
        cout<<x<<" ";
    }
}
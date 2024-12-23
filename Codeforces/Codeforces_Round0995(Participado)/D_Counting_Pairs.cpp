#define ll long long
#define pb push_back
#define mp make_pair
#include <bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    ll a,b,c,n,m,k;
    while(t--){
        cin>>n>>a>>b;
        vector<long long> V;
        ll sumita=0;
        while(n--){
            cin>>c;
            sumita+=c;
            V.push_back(c);
        }
        ll sumita2=sumita-a;
        ll sumita3=sumita-b;
        sort(V.begin(),V.end());
        ll caca=V.size()-1;
        ll res=0;
        for(int i=0;i<V.size();i++){
        int objetivo = sumita3-V[i];
        int izquierda = 0, derecha = V.size() - 1;
        int resultado = -1;
        int indiceMenor = -1;
        int medio;
        while (izquierda <= derecha) {
            medio = izquierda + (derecha - izquierda) / 2;
            if (V[medio] == objetivo) {
                resultado = medio;
                break;
            }
            else if (V[medio] < objetivo) {
                izquierda = medio + 1;
                indiceMenor = medio;
            }
            else {
                derecha = medio - 1;
            }
        }
        cout<<medio<<" ";
        ll j=caca;
        while(true){
            if(j!=i && V[i]-V[j]<=sumita2){
                res+=j-medio+1;
                break;
            }
            j--;
        }
        caca=j;
        V[i]=100000000000000000;
    }
    cout<<res;
    cout<<"\n";
}
}
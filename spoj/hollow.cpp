#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    while(cin>>a>>b){
        int aux=b;
        if(a==0){
            break;
        }
        long long x;
        vector<long long> V;
        map<long long,long long> M;
        long long jaja=INT_MAX;
        bool com=true;
        long long sum=0;
        while(b--){
            cin>>x;
            sum+=x;
            V.push_back(sum%a);
            if(M[sum%a]!=0){
                if(com){
                    jaja=sum%a;
                    com=false;
                }
            }else{
                M[sum%a]++;
            }
        }
        bool com2=true;
        if(jaja==INT_MAX){
            for(int i=1;i<=aux;i++){
                cout<<i<<" ";
            }
        }
        for(long long i=0;i<V.size();i++){
            if(!com2){
                cout<<i+1<<" ";
            }
            if(V[i]==jaja){
                if(com2){
                    com2=false;
                }else{
                    break;
                }
            }
        }
        cout<<"\n";
    }
}
//no me daba cuando todos los mods eran iguales...
// :D
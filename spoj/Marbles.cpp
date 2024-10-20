#include <iostream>
#include <vector>
using namespace std;
long long int a,b,t;
long long int mcd(long long int n1,long long int n2){
    if(n1<n2){
        swap(n1,n2);
    }
    while(n2!=0){
        long long int n2copy=n2;
        n2=n1%n2;
        n1=n2copy;
    }
    return n1;
}
int main(){
    cin>>t;
    for(long long int i=0;i<t;i++){
        cin>>a>>b;
        a=a-b;
        if(a!=0){
            long long int nume=(a+b-1);
            long long int denume1=a;
            long long int denume2=b-1;
            if(denume1<denume2){
                swap(denume1,denume2);
            }
            vector<long long int> V;
            vector<long long int> V2;
            for(long long int j=denume1+1;j<=nume;j++){
                V.push_back(j);
            }
            for(long long int j=1;j<=denume2;j++){
                V2.push_back(j);
            }
            for(long long int con1=0;con1<V2.size();con1++){
                for(long long int con2=0;con2<V.size();con2++){
                    long long int maxi=mcd(V2[con1],V[con2]);
                    V2[con1]=V2[con1]/maxi;
                    V[con2]=V[con2]/maxi;
                }
            }
            long long int res=1;
            for(auto x:V){
                res=res*x;
            }
            cout<<res<<"\n";
        }else{
            cout<<1<<"\n";
        }
    }
}
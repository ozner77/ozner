#include<bits/stdc++.h>
using namespace std;
int longitud_maxima(int n,int k,vector<int> a){
    if(k==1){
        map<int,int> last;
        int l=0;
        int respuesta=0;
        for(int r=0;r<n;++r){
            if(last.find(a[r])!=last.end() && last[a[r]]>=l){
                l=last[a[r]]+1;
            }
            last[a[r]]=r;
            respuesta=max(respuesta,r-l+1);
        }
        return respuesta;
    }else if(n<=2000){
        int respuesta=0;
        for(int i=0;i<n;++i){
            map<int,int> freq;
            int maxf=0;
            for(int j=i;j<n;++j){
                freq[a[j]]++;
                maxf=max(maxf,freq[a[j]]);
                if(maxf>k)break;
                respuesta=max(respuesta,j-i+1);
            }
        }
        return respuesta;
    }else{
        return n;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> V;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        V.push_back(a);
    }
    cout<<longitud_maxima(n,k,V);
}
#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<vector<char>> V(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>V[i][j];
            }
        }
        if(a==0 && b==0){
            long long uwu=0;
            for(auto x:V){
                for(auto y:x){
                    if(y!='W'){
                        uwu++;
                    }
                }
            }
            cout<<uwu<<"\n";
            continue;
        }
        int res=0;
        bool com=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(V[i][j]=='G'){
                    V[i][j]='T';
                    res++;
                    if(i+b<n && j+a<n){
                        if(V[i+b][j+a]=='G'){
                            V[i+b][j+a]='S';
                        }else if(V[i+b][j+a]=='B'){
                            V[i+b][j+a]='G';
                        }
                    }
                }else if(V[i][j]=='B'){
                    if(i-b>=0 && j-a>=0){
                        if(V[i-b][j-a]=='W'){
                            com=false;
                            break;
                        }else if(V[i-b][j-a]=='S'){
                            res+=2;
                            V[i-b][j-a]='T';
                            V[i][j]='T';
                            if(i+b<n && j+a<n){
                                if(V[i+b][j+a]=='G'){
                                    V[i+b][j+a]='S';
                                }else if(V[i+b][j+a]=='B'){
                                    V[i+b][j+a]='G';
                                }
                            }
                        }
                    }else{
                        com=false;
                        break;
                    }
                }
            }
            if(!com){
                break;
            }
        }
        if(com){
            cout<<res<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
}
//a >
//b v
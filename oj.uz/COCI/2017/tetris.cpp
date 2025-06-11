#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> V(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>V[i][j];
        }
    }
    int a=0,b=0,c=0,d=0,e=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(V[i][j]!='.'){
                char act=V[i][j];
                if(i+1<n && j+1<m && V[i+1][j]==act && V[i+1][j+1]==act && V[i][j+1]==act){
                    a++;
                }else if((i+3<n && V[i+1][j]==act && V[i+2][j]==act && V[i+3][j]==act) || (j+3<m && V[i][j+1]==act && V[i][j+2]==act && V[i][j+3]==act)){
                    b++;
                }else if((i+1<n && j+1<m && j-1>=0 && V[i+1][j]==act && V[i+1][j-1]==act && V[i][j+1]==act) || (i+2<n && j+1<m && V[i+1][j]==act && V[i+1][j+1]==act && V[i+2][j+1]==act)){
                    c++;
                }else if((i+1<n && j+2<m && V[i][j+1]==act && V[i+1][j+1]==act && V[i+1][j+2]==act) || (i+2<n && j-1>=0 && V[i+1][j]==act && V[i+1][j-1]==act && V[i+2][j-1]==act)){
                    d++;
                }else if((i+2<n && j+1<m && V[i+1][j]==act && V[i+2][j]==act && V[i+1][j+1]==act)){
                    e++;
                }else if(i+2<n && j-1>=0 && V[i+1][j]==act && V[i+2][j]==act && V[i+1][j-1]==act){
                    e++;
                }else if(i+1<n && j+1<m && j-1>=0 && V[i+1][j-1]==act && V[i+1][j]==act && V[i+1][j+1]==act){
                    e++;
                }else if(i+1<n && j+1<m && j-1>=0 && V[i][j+1]==act && V[i][j-1]==act && V[i+1][j]==act){
                    e++;
                }
            }
        }
    }
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e;
}
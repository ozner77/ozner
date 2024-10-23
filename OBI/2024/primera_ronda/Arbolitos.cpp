#include <iostream>
using namespace std;
long long a,b;
int main(){
    cin>>a;
    cin>>b;
    int c=a-b;
    c++;
    int d=0;
    for(int i=c;i<=a;i++){
        if(i%2!=0){
            d++;
        }
    }
    if(d%2==0){
        cout<<"Si se pudo";
    }
    else{
        cout<<"No";
    }
}
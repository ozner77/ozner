#include <iostream>
using namespace std;
int main(){
    long long t,a,b,c,happy=0,remain;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        happy=0;
        remain=0;
        for(int j=0;j<a;j++){
            cin>>c;
            happy+=c-(c%2);
            remain+=c%2;
        }
        b=b*2;
        b=b-happy;
        if(b/2>=remain){
            happy+=remain;
        }else{
            happy+=(b-remain);
        }
        cout<<happy<<"\n";
    }
}
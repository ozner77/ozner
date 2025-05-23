#include <bits/stdc++.h>
using namespace std;
int main(){
    int con=0;
    for(int i=1;i<1000000;i++){
        for(int j=i;j<1000000;j+=i){
            con++;
        }
    }
    cout<<con;
}
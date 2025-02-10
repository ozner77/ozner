#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string doctor;
    while(cin>>doctor){
        if(doctor.size()<=s.size()){
            cout<<"go\n";
        }else{
            cout<<"no\n";
        }
    }
}
#include <bits/stdc++.h>
#include "memory.h" 
//#include "grader.h"
using namespace std;
char faceup(int x){
    return 'A';
}
void play(){
    unordered_map<char,vector<int>> M;
    for(int i=1;i<=50;i++){
        char a=faceup(i);M[a].push_back(i);
    }
    for(auto x:M){
        faceup(x.second[0]);
        faceup(x.second[1]);
    }
}
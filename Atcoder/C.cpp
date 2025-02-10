#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<pair<long long,long long>> q;
    long long N;
    long long dif=0;
    cin>>N;
    while(N--){
        long long a,b;
        cin>>a;
        if(a==1){
            cin>>b;
            if(q.empty()){
                q.push_back(make_pair(0,b));
            }else{
                long long ant=q.back().first;
                long long len=q.back().second;
                q.push_back(make_pair(ant+len,b));
            }
        }else if(a==2){
            dif+=q.front().second;
            q.pop_front();
        }else{
            cin>>b;
            long long res=q[b-1].first;
            cout <<res-dif<<"\n";
        }
    }
}
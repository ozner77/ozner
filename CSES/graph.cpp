#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 6;
    vector<vector<int>> adj(n);
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 5};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2};
    int res=INT_MAX;
    for(int i=0;i<n;i++){
    vector<int> dist(n, -1);
    queue<int> q;
    int start = i;
    dist[start] = i;
    q.push(start);
    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (int sig : adj[node]) {
            if (dist[sig] == -1) {
                dist[sig] = dist[node] + 1;
                q.push(sig);
            }else if(sig!=node && dist[sig]!=0 && dist[node]!=0){
                if(dist[sig]+dist[node]+1<res){
                    res=dist[sig]+dist[node]+1;
                }
            }
        }
    }
    }
    if(res!=INT_MAX){
        cout<<res;
    }
}
//no creo que funcione

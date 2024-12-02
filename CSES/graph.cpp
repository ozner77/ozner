#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    int a,b;
    while(m--){
        cin>>a>>b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int res=INT_MAX;
    for(int i=0;i<n;i++){
    vector<int> dist(n, -1);
    vector<int> p(n);
    queue<int> q;
    int start = i;
    dist[start] = 0;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int sig : adj[node]) {
            if (dist[sig] == -1) {
                p[sig]=node;
                dist[sig] = dist[node] + 1;
                q.push(sig);
            }else if(p[node]!=sig){
                if(dist[sig]+dist[node]+1<res){
                    res=dist[sig]+dist[node]+1;
                }
            }
        }
    }
    }
    if(res!=INT_MAX){
        cout<<res;
    }else{
        cout<<-1;
    }
}
//no creo que funcione

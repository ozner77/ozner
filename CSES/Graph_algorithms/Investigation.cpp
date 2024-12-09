#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> pii;
void dijkstra(const vector<vector<pii>>& graph, long long inicio, long long final, vector<long long>& V, vector<vector<long long>>& pasos) {
    long long n = graph.size();
    V.assign(n, LLONG_MAX);
    V[inicio] = 0;
    pasos.assign(n, vector<long long>());
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, inicio});
    while (!pq.empty()) {
        long long cd = pq.top().first;
        long long cn = pq.top().second;
        pq.pop();
        if (cd > V[cn]) {
            continue;
        }
        for (auto sig : graph[cn]) {
            long long sig2 = sig.first;
            long long peso = sig.second;    
            if (cd + peso < V[sig2]) {
                V[sig2] = cd + peso;
                pasos[sig2].clear();
                pasos[sig2].push_back(pasos[cn].size() + 1);
                pq.push({V[sig2], sig2});
            } else if (cd + peso == V[sig2]) {
                pasos[sig2].push_back(pasos[cn].size() + 1);
            }
        }
    }
}
int main() {
    long long n, m;
    cin >> n >> m;
    vector<vector<pii>> graph(n);
    while (m--) {
        long long a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    long long inicio=0;
    long long final=n-1;
    vector<long long> V(n, LLONG_MAX);
    vector<vector<long long>> pasos(n);
    dijkstra(graph, inicio, final, V, pasos);
    cout<<V[final]<< " ";
    cout<<pasos[final].size()<< " ";     
    if (!pasos[final].empty()){
        long long mini=*min_element(pasos[final].begin(), pasos[final].end());
        long long maxi=*max_element(pasos[final].begin(), pasos[final].end());
        cout<<mini<<" "<<maxi<<" ";
    }   
}
//caca, lo termino mañana(la semana termino el 2 de diciembre,el upsolve dura desde n+1 a n+7, n+1=3 N+7=9 por lo tanto termina mañana :D)

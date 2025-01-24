#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
#include <bits/stdc++.h>
using namespace std;
const ll INF = 1e18;

// Función para calcular las distancias mínimas desde múltiples fuentes (cámaras de escape) usando Dijkstra
vector<ll> dijkstra(int n, const vector<vector<pii>>& graph, const vector<int>& exits) {
    vector<ll> dist(n, INF); // Distancias iniciales a infinito
    priority_queue<pii, vector<pii>, greater<>> pq; // Min-heap para Dijkstra

    // Insertar las cámaras de escape en la cola de prioridad con distancia 0
    for (int exit : exits) {
        dist[exit] = 0;
        pq.emplace(0, exit); // (distancia, nodo)
    }

    // Relajación
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue; // Si la distancia no es la mejor, la ignoramos

        for (auto [v, w] : graph[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.emplace(dist[v], v);
            }
        }
    }

    return dist; // Devuelve las distancias mínimas a las cámaras de escape
}

// Función principal para calcular el plan de escape
ll travel_plan(int N, int M, vector<vector<int>>& R, vector<int>& L, int K, vector<int>& P) {
    // Construir el grafo
    vector<vector<pii>> graph(N); // Lista de adyacencia: nodo -> [(vecino, peso)]
    for (int i = 0; i < M; i++) {
        int u = R[i][0], v = R[i][1], w = L[i];
        graph[u].emplace_back(v, w);
        graph[v].emplace_back(u, w);
    }

    // Paso 1: Calcular las distancias mínimas desde las cámaras de escape
    vector<ll> min_distances = dijkstra(N, graph, P);

    // Paso 2: Simular el peor caso de bloqueo por el portero
    ll max_time = 0; // Tiempo máximo garantizado para escapar
    for (int chamber = 0; chamber < N; chamber++) {
        if (find(P.begin(), P.end(), chamber) != P.end()) continue; // Saltar cámaras de escape

        vector<pii> neighbors = graph[chamber]; // Vecinos de la cámara actual
        if (neighbors.size() < 2) continue; // Si tiene menos de 2 salidas, no se considera

        // Ordenar vecinos por tiempo
        sort(neighbors.begin(), neighbors.end(), [&](pii a, pii b) {
            return a.second < b.second; // Comparar por peso
        });

        // Elegir los dos mejores pasillos (en términos de tiempo)
        int best = neighbors[0].first;
        int second_best = neighbors[1].first;

        // Calcular el peor tiempo garantizado para esta cámara
        ll worst_time = min(min_distances[best], min_distances[second_best]);
        max_time = max(max_time, worst_time); // Actualizar el tiempo máximo garantizado
    }

    return max_time; // Tiempo mínimo garantizado para escapar
}

int main() {
    // Entrada de ejemplo
    int N = 5, M = 4, K = 3;
    vector<vector<int>> R = {
        {0, 1}, {0, 2}, {3,2}, {2,4}
    };
    vector<int> L = {2,3,1,4};
    vector<int> P = {1,3,4};

    // Llamar a la función y mostrar el resultado
    cout << travel_plan(N, M, R, L, K, P) << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// DSU class
class DSU {
public:
    vector<int> parent, size;
    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int u) {
        if (u == parent[u]) return u;
        return parent[u] = find(parent[u]);
    }
    void unite(int u, int v) {
        u = find(u), v = find(v);
        if (u != v) {
            if (size[u] < size[v]) swap(u, v);
            parent[v] = u;
            size[u] += size[v];
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m1, m2;
        cin >> n >> m1 >> m2;

        DSU dsuF(n), dsuG(n);
        for (int i = 0; i < m1; ++i) {
            int u, v;
            cin >> u >> v;
            dsuF.unite(u, v);
        }
        for (int i = 0; i < m2; ++i) {
            int u, v;
            cin >> u >> v;
            dsuG.unite(u, v);
        }
        vector<pair<int, int>> operations;
        for (int u = 1; u <= n; ++u) {
            for (int v = u + 1; v <= n; ++v) {
                if (dsuF.find(u) != dsuF.find(v) && dsuG.find(u) == dsuG.find(v)) {
                    operations.emplace_back(u, v);
                    dsuF.unite(u, v);
                }
            }
        }
        cout << operations.size() << '\n';
        for (auto [u, v] : operations) {
            cout << u << " " << v << '\n';
        }
    }

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll n1 = n;
        vector<vector<ll>> V;
        vector<ll> L;
        ll con = 1;
        while (n1--) {
            L.clear();
            for (int i = 0; i < m; i++) {
                ll a;
                cin >> a;
                L.push_back(a);
            }
            sort(L.begin(), L.end());
            L.push_back(con);
            V.push_back(L);
            con++;
        }
        sort(V.begin(), V.end());
        bool valid = true;
        ll card=-1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (V[j][i] <= card) {
                    cout << -1 << "\n";
                    valid = false;
                    break;
                }
                card=V[j][i];
            }
            if (!valid) break;
        }
        if (valid) {
            for(auto x:V){
                cout << x[x.size() - 1] << " ";
            }
            cout << "\n";
        }
    }
}
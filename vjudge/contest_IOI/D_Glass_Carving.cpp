#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    t = 1;
    while (t--) {
        ll w, h, n;
        cin>>w>>h>>n;
        set<ll> l;
        set<ll> c;
        multiset<ll> ln;
        multiset<ll> cn;
        l.insert(0);
        l.insert(h);
        c.insert(0);
        c.insert(w);
        ln.insert(h);
        cn.insert(w);
        for (int i = 0; i < n; i++) {
            char a;
            ll pos;
            cin>>a>>pos;
            if (a=='H') {
                l.insert(pos);
                auto it = l.find(pos);
                auto ita = prev(it);
                auto itb = next(it);
                ln.erase(ln.find(*itb-*ita));
                ln.insert(*itb-*it);
                ln.insert(*it-*ita);
            } else {
                c.insert(pos);
                auto it = c.find(pos);
                auto ita = prev(it);
                auto itb = next(it);
                cn.erase(cn.find(*itb-*ita));
                cn.insert(*itb-*it);
                cn.insert(*it-*ita);
            }
            cout << (*prev(ln.end()))*(*prev(cn.end()))<<"\n";
        }
    }
}

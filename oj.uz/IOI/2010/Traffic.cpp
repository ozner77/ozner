#include <traffic.h>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> a;
vector<vector<long long>> b;
vector<int> c;
long long d = 0;
int f3(int e, int f[], int g[], int h[]) {
    a.resize(e);
    c.resize(e);
    b.resize(e);
    for (int i = 0; i < e - 1; i++) {
        a[g[i]].push_back(h[i]);
        a[h[i]].push_back(g[i]);
        c[i] = f[i];
        d += c[i];
    }
    c[e - 1] = f[e - 1];
    d += c[e - 1];
    long long i = LLONG_MAX;
    int j = 0;
    f2(0, -1);
    f1(0, -1);

    for (int k = 0; k < e; k++) {
        long long l = 0;
        for (auto m : b[k]) {
            l = max(l, m);
        }
        if (l < i) {
            i = l;
            j = k;
        }
    }
    return j;
}
long long f1(int e, int f) {
    long long g = 0;
    for (auto h : a[e]) {
        if (h == f) continue;
        b[e].push_back(f1(h, e));
        g += b[e].back();
    }
    g += c[e];
    return g;
}
void f2(int e, int f) {
    int g = 0;
    for (auto h : a[e]) {
        if (h == f) continue;
        b[h].push_back(d - b[e][g]);
        f2(h, e);
        g++;
    }
}
//Lin me salvaste la vida...
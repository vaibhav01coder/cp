#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> a;
        a.reserve(n);

        ll k = min(n - 1, x);
        for (ll i = 0; i <= k; i++) a.push_back(i);

        ll cur = 0;
        for (ll v : a) cur |= v;

        if (cur != x) a.push_back(x);

        while ((ll)a.size() < n) a.push_back(0);

        for (ll i = 0; i < n; i++) {
            cout << a[i] << (i + 1 < n ? ' ' : '\n');
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>

#define ll long long
#define fi first
#define se second

using namespace std;

int check(int a[], int n, int t, ll time) {
    ll total = 0;
    for (int i = 0; i < n; i++) {
        total += time / a[i];      
    }
    return total >= t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, t; cin >> n >> t;
    int a[n];
    for (int &x : a) cin >> x;
    ll res = -1;
    ll l = 0, r = 1ll * t * (*min_element(a, a + n));
    while (l <= r) {
        ll m = (l + r) / 2;
        if (check(a, n, t, m)) {
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << res << endl;
    return 0;
}
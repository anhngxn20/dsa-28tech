#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <numeric>

#define ll long long
#define fi first
#define se second

using namespace std;

int check(int a[], int n, int k, double len) {
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        total += 1ll * a[i] / len;
    }
    return total >= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, k; cin >> n >> k;
    int a[n]; for (int &x : a) cin >> x;
    double l = 1e-9, r = *max_element(a, a + n);
    double res = 0;
    while (l < r)
    {
        double m = (l + r) / 2;
        if (check(a, n, k, m))
        {
            res = m;
            l = m + 1e-9;
        } else {
            r = m - 1e-9;
        } 
    }
    cout << fixed << setprecision(6) << res << endl;;
    return 0;
}
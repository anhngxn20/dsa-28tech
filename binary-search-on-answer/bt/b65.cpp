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

int check(int a[], int n, int k, ll m) {
    ll s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
        if (s > m) {
            s = a[i];
            k--;
        }
    }
    k--;
    return k >= 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, k; cin >> n >> k;
    int a[n]; for (int &x : a) cin >> x;
    ll l = *max_element(a, a+n), r = accumulate(a, a+n, 0ll), res;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(a, n, k, m))
        {
            res = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << res << endl;
    
    return 0;
}
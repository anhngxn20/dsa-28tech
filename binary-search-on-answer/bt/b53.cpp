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

int check(int a[], int n, int L, ll h) {
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h) {
            sum += a[i] - h;
        }
    }
    return sum >= L;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, L; cin >> n >> L;
    int a[n]; for (int &x : a) cin >> x;
    ll l = 0, r = *(max_element(a, a+n));
    ll res;
    while (l <= r) {
        ll m = (l + r) / 2;
        if (check(a, n, L, m))
        {
            res = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
        
    }
    cout << res << endl;

    return 0;
}
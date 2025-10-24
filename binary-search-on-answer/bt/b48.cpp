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
#include <numeric>

#define ll long long
#define fi first
#define se second

using namespace std;

int check(int a, int b, int n, ll x)
{
    ll total = (x / a) * (x / b);
    return total >= n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int a, b, n;
    cin >> a >> b >> n;
    ll l = 1;
    ll r = 1ll * n * max(a, b);
    ll res = -1;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(a, b, n, m))
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
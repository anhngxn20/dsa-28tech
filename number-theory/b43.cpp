#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <numeric>
#include <cctype>
#include <string>
#include <sstream>

#define ll long long
#define fi first
#define se second
#define mod 1000000007

using namespace std;

ll F[1005][1005];

ll C(int n, int k) 
{
    if (k == n || k == 0) return 1;
    if (F[n][k] != 0) return F[n][k];
    ll res = C(n-1, k - 1) % mod + C(n - 1, k) % mod;
    F[n][k] = res % mod;
    return res % mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, m; cin >> n >> m;
    cout << C(n - 1, m - 1);
    return 0;
}

// khi ranh nho lam cach 2, Euler.
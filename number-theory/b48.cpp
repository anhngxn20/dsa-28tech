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

ll powMod(ll a, ll b, ll c) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b % 2) {
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int  t; cin >> t;
    while (t--) {
        ll a, b, c; cin >> a >> b >> c;
        ll e = powMod(b, c, mod - 1); // mod theo Fermat
        cout << powMod(a, e, mod) << endl;
    }

    return 0;
}
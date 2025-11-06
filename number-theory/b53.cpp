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

using namespace std;

ll powMod (ll a, ll b, ll c) {
    ll res = 1;
    while(b) {
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

ll inverse(ll a, ll m) {
    return powMod(a, m - 2, m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    ll a; cin >> a;
    ll m = 1000000007;
    cout << inverse(a, m);    

    return 0;
}
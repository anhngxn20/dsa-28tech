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

ll extendedEuclid(ll a, ll b, ll& x, ll& y) {
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll g = extendedEuclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    ll a, b; cin >> a >> b;
    ll x, y;
    ll g = extendedEuclid(a, b, x, y);
    if (g != 1) {
        cout << -1;
        return 0;
    }
    cout << (x % b + b) % b;

    return 0;
}
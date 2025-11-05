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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    ll L, R; cin >> L >> R;

    set<ll> ans;

    for (ll a = 1; a * a <= R; a++) {
        for (ll b = 1; a*a * b*b*b <= R; b++) {
            ll val = a*a * b*b*b;
            if (val >= L && val <= R) ans.insert(val);
        }
    }

    for (ll x : ans) cout << x << " ";

    return 0;
}
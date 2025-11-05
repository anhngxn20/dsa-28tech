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

int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    ll n; cin >> n;
	ll res = 0;
	for (ll i = 5 ; i <= n ; i *= 5) {
		res += n/i;
		res %= MOD;
	}
	cout << res;

    return 0;
}
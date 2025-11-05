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
    int t;
    cin >> t;
    int mod = 1e9 + 7;
    ll res = 1;
    while(t--){
        int p, e; cin >> p >> e;
        res *= (e + 1) % mod;
        res %= mod;
    }
    cout << res << endl;

    return 0;
}
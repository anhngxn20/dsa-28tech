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

int check(int n, int x, int y, int m) {
    int total = (m / x) + (m / y);
    return total >= n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, x, y; cin >> n >> x >> y;
    int l = 1, r = max(x, y) * n;
    int res;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(n - 1, x, y, m)) {
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << res + min(x,y) << endl;

    return 0;
}
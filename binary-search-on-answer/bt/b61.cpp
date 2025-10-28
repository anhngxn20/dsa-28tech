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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n; cin >> n;
    int a[n]; for (int &x : a) cin >> x;
    sort(a, a+n);
    int l = 0, r = n-1;
    int res = 0;
    while (l < r)
    {
        res = max(res, a[l] + a[r]);
        l++; r--;
    }
    cout << res << endl;

    return 0;
}
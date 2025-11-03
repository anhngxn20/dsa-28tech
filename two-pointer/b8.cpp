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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    int l = 0;
    int cur_cnt = 0;
    ll res = 0;
    map<int, int> mp;
    for (int r = 0; r < n; r++)
    {
        mp[v[r]]++;
        if (mp[v[r]] == 1) cur_cnt++;
        while (cur_cnt > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0) cur_cnt--;
            l++;
        }
        res += r - l + 1;
    }
    cout << res;

    return 0;
}
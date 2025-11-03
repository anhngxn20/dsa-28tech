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
    ll res = 0;
    multiset<int> ms;
    for (int r = 0; r < n; r++)
    {
        ms.insert(v[r]);
        while (true)
        {
            int max_val = *ms.rbegin();
            int min_val = *ms.begin();
            if (max_val - min_val <= k) break;
            auto it = ms.find(v[l]);
            ms.erase(it);
            l++;            
        }
        res += r - l + 1;
    }
    cout << res;

    return 0;
}
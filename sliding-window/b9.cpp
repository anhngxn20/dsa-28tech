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
    int a[n]; for (int &x : a) cin >> x;
    int sum = 0;
    for (int x : a) sum += x;
    if (sum < k)
    {
        cout << -1;
        return 0;
    }
    int cur_sum = 0;
    for (int i = 0; i < k; i++)
    {
        cur_sum += a[i];        
    }
    int res = cur_sum;
    for (int i = k; i < n; i++)
    {
        cur_sum -= a[i - k];
        cur_sum += a[i];
        res = max(res, cur_sum);
    }
    cout << k - res;    

    return 0;
}
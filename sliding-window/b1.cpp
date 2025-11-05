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
    ll cur_sum = 0;
    int idx = 0;
    for (int i = 0; i < k; i++)
    {
        cur_sum += a[i];
    }
    ll max_sum = cur_sum;
    for (int i = 1; i < n - k + 1; i++)
    {
        cur_sum = cur_sum - a[i - 1] + a[i + k - 1];
        if (max_sum < cur_sum)
        {
            idx = i;
            max_sum = cur_sum;
        }
    }
    cout << max_sum << endl;
    for (int i = idx; i < idx + k; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
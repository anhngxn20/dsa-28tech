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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    int l = 0, pos = -1, min_len = INT_MAX;
    ll cur_sum = 0;
    for (int r = 0; r < n; r++)
    {
        cur_sum += a[r];
        if (cur_sum >= k)
        {
            while (cur_sum - a[l] >= k)
            {
                cur_sum -= a[l];
                l++;
            }
            if (r - l + 1 < min_len)
            {
                min_len = r - l + 1;
                pos = l;
            }
        }
    }
    if (pos == -1)
        cout << pos;
    else
    {
        for (int i = pos; i < pos + min_len; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}
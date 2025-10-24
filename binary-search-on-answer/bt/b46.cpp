#include <iostream>
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

int check(int a[], int n, ll target, int k)
{
    ll sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > target)
        {
            cnt++;
            sum = a[i];
        }
    }
    if (sum >= 0)
        cnt++;
    return cnt <= k;
}

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
    ll l = *max_element(a, a + n), r = accumulate(a, a + n, 0ll);
    ll res = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(a, n, m, k))
        {
            res = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << res << endl;
    return 0;
}
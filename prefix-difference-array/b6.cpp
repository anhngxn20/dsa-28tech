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

int freq[1000005], D[1000005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int &x : a)
        cin >> x;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        D[l]++;
        D[r + 1]--;
    }
    for (int i = 0; i < n; i++)
    {
        freq[i] = freq[i - 1] + D[i];
    }
    sort(a, a + n);
    sort(freq, freq + n);
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res += 1ll * a[i] * freq[i];
    }
    cout << res << endl;

    return 0;
}
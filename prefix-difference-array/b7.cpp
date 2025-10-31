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

int a[200005], D[200005], F[200005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, k, q;
    cin >> n >> k >> q;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        D[l]++;
        D[r + 1]--;
    }

    a[0] = D[0];
    for (int i = 1; i < 200000; i++)
    {
        a[i] = a[i - 1] + D[i];
    }

    for (int i = 0; i < 200000; i++)
    {
        if (a[i] >= k)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }

    F[0] = a[0];
    for (int i = 1; i < 200000; i++)
    {
        F[i] = F[i - 1] + a[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            cout << F[r] << endl;
        }
        else
        {
            cout << F[r] - F[l - 1] << endl;
        }
    }

    return 0;
}
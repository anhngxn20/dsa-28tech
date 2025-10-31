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

int D[1000005], F[1000005];

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
    D[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        D[i] = a[i] - a[i - 1];
    }
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        D[l] += k;
        D[r + 1] -= k;
    }
    F[0] = D[0];
    for (int i = 1; i < n; i++)
    {
        F[i] = D[i] + F[i - 1];
    }
    for (int i = 0; i < n; i++)
        cout << F[i] << " ";

    return 0;
}
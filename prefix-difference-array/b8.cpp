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

 typedef struct {int l, r, d;} option;

ll D[100005], F[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, m, k; cin >> n >> m >> k;
    int a[n]; for (int &x : a) cin >> x;
    option tt[m];
    for (auto &x : tt) {
        cin >> x.l >> x.r >> x.d;
    }
    D[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        D[i] = a[i] - a[i - 1];
    }
    
    while (k--)
    {
        int x, y; cin >> x >> y;
        x--; y--;
        for (int i = x; i <= y; i++)
        {
            int l = tt[i].l;
            int r = tt[i].r;
            int d = tt[i].d;
            l--; r--;
            D[l] += d;
            D[r + 1] -= d;
        }
    }
    F[0] = D[0];
    for (int i = 1; i < n; i++)
    {
        F[i] = F[i - 1] + D[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << F[i] << " ";
    }
    
    return 0;
}

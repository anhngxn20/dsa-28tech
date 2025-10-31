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
int D[100005], F[100005];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, m; cin >> n >> m;
    int a[n] = {0};
    while (m--) {
        int x, r; cin >> x >> r;
        x--;
        int left = max(0, x - r);
        int right = min(n, x + r);
        D[left]++;
        D[right + 1]--;
    }
    F[0] = D[0];
    for (int i = 1; i < n; i++)
    {
        F[i] = F[i-1] + D[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (F[i]) cnt++;
    }
    cout << cnt;


    return 0;
}

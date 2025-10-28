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

int check(int a[], int n, int k, int m) {
    int cnt = 0;
    int tmp = a[0];
    for (int i = 1; i < n; i++)
    {
        int gap = a[i] - tmp;
        if (gap >= m) {
            cnt++;
            tmp = a[i];
        }
    }
    cnt++;
    
    return cnt >= k;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, k; cin >> n >> k;
    int a[n]; for (int &x : a) cin >> x;
    sort(a, a+n);
    int l = 0, r = *max_element(a, a+n) - *min_element(a, a+n);
    int res;
    while (l <= r) {
        int m = (l + r) / 2;
        if (check(a, n, k, m))
        {
            res = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << res << endl;

    return 0;
}
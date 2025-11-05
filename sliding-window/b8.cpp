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

int d[1000005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, k; cin >> n >> k;
    int a[n]; for (int &x : a) cin >> x;
    for (int i = 0; i < k; i++)
    {
        if (d[a[i]])
        {
            cout << "YES";
            return 0;
        }
        d[a[i]] = 1;
    }
    for (int i = k; i < n; i++)
    {
        d[a[i - k]] = 0;
        if (d[a[i]])
        {
            cout << "YES";
            return 0;
        }
        d[a[i]] = 1;
    }
    cout << "NO";

    return 0;
}
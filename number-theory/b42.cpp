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

ll calc(int k)
{
    ll res = 1ll * k * k * (k * k - 1) / 2;
    return res - 2 * 2 * (k - 1) * (k - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int k; cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cout << calc(i) << '\n';
    }

    return 0;
}
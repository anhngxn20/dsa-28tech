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

int n, a[25], final = 0;

void generating() {
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        final = 1;
    }
    else a[i] = 1;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n; int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll res = LLONG_MAX;
    while (!final)
    {
        ll sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                sum1 += arr[i - 1];
            }
            else sum2 += arr[i - 1];
        }
        res = min(res, abs(sum1 - sum2));
        generating();
    }
    cout << res;

    return 0;
}
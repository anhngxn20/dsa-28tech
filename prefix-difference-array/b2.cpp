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

ll prefix_arr[10000001] = {0};

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
    prefix_arr[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_arr[i] = prefix_arr[i - 1] + a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
            cout << prefix_arr[r] << endl;
        else
            cout << prefix_arr[r] - prefix_arr[l - 1] << endl;
    }

    return 0;
}
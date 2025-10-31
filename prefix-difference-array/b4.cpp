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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    int D[n];
    D[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        D[i] = a[i] - a[i - 1];
    }
    for (int x : D)
        cout << x << " ";

    return 0;
}
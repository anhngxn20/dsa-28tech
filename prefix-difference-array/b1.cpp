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

ll F[1000005];

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
    F[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        F[i] = F[i - 1] + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << F[i] << " ";
    }

    return 0;
}
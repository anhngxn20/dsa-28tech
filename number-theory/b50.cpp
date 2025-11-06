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

int C(int k, int n)
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << C(col, row) << " ";
        }
        cout << '\n';
    }
    return 0;
}
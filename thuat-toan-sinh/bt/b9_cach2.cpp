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

int n, k, a[1000], b[1000], cc = 0;

void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}

void generating()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        --i;
    }
    if (i == 0)
    {
        cc = 1;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        cin >> b[i];
    ktao();
    int total = 0, id = 0;
    while (!cc)
    {
        ++total;
        bool ok = true;
        for (int i = 1; i <= k; i++)
        {
            if (a[i] != b[i])
                ok = false;
        }
        if (ok)
            id = total;
        generating();
    }
    cout << total - id + 1 << endl;

    return 0;
}
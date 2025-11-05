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

int tsntk(int n, int k)
{
    int i, cnt = 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
                if (cnt == k)
                    return i;
            }
        }
    }
    if (n > 1) cnt++;
    if (cnt == k) return n;
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, k, kq;
    cin >> n >> k;
    kq = tsntk(n, k);
    cout << kq;

    return 0;
}
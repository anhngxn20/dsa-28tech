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

bool ngt[10005];
void sang()
{
    ngt[0] = ngt[1] = true;
    for (int i = 2; i < 10005; i++)
    {
        if (!ngt[i])
        {
            for (int j = i * 2; j < 10005; j += i)
                ngt[j] = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int a, b;
    cin >> a >> b;
    vector<bool> isBeautiful(b + 1, false);
    sang();
    for (int x = 2; x < 10005; x++)
    {
        if (!ngt[x])
        {
            long long sq = 1LL * x * x;
            if (sq > b) break;
            for (long long i = sq; i <= b; i += sq) isBeautiful[i] = true;
        }
    }
    for (int i = a; i <= b; i++)
        if (isBeautiful[i]) cout << i << " ";

    return 0;
}
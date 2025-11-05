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

int d[256];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    string s; cin >> s;
    int max_len = 0, l = 0;
    for (int r = 0; r < s.size(); r++)
    {
        while (d[s[r]])
        {
            d[s[l]] = 0;
            l++;
        }
        d[s[r]] = 1;
        max_len = max(max_len, r - l + 1);
    }
    cout << max_len;

    return 0;
}
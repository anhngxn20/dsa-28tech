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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    string s; cin >> s;
    int x, y; cin >> x >> y;
    int l = 0;
    int max_len = 0;
    int d[256] = {0};
    for (int r = 0; r < s.length(); r++)
    {
        d[s[r] - '0']++;
        while (d[2] > x || d[8] > y)
        {
            d[s[l] - '0']--;
            l++;
        }
        max_len = max(max_len, r - l + 1);
    }
    cout << max_len;    

    return 0;
}
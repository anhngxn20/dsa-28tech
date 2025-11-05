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

int ds[256], dt[256];

bool check() {
    for (char c = 'a'; c <= 'z'; c++)
    {
        if(ds[c] < dt[c]) return 0;
    }
    return 1;    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    string s, t; cin >> s >> t;
    int min_len = INT_MAX, l = 0;
    int idx;
    for (char c : t) dt[c]++;
    for (int r = 0; r < s.size(); r++)
    {
        ds[s[r]]++;
        if (check())
        {
            while (ds[s[l]] > dt[s[l]])
            {
                ds[s[l]]--;
                l++;
            }
            if (r - l + 1 < min_len)
            {
                min_len = r - l + 1;
                idx = l;
            }
        }
    }
    if (min_len == INT_MAX) cout << -1;
    else {
        for (int i = idx; i < idx + min_len; i++)
        {
            cout << s[i];
        }
    }
    

    return 0;
}
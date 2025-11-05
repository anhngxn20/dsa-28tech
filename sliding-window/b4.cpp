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
    int min_len = s.size();
    set<char> se(s.begin(), s.end());
    int target = se.size();
    int l = 0;
    map<char, int> mp;
    for (int r = 0; r < s.size(); r++)
    {
        mp[s[r]]++;
        if (mp.size() == target)
        {
            while (mp[s[l]] > 1)
            {
                mp[s[l]]--;
                l++;
            }
            min_len = min(min_len, r - l + 1);
        }
    }
    cout << min_len;

    return 0;
}
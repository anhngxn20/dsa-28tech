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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    string s;
    cin >> s;
    int i = s.length() - 1;
    while (s[i] == '1' && i >= 0)
    {
        s[i] = '0';
        i--;
    }
    if (i >= 0) s[i] = '1';
    cout << s;

    return 0;
}
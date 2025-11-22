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

string s;
int final = 0;

void init() {
    cin >> s;
    set<char> se(s.begin(), s.end());
    s = string(se.begin(), se.end());
}

void generating() {
    int i = s.size() - 1;
    while (i >= 0 && s[i] > s[i + 1]) i--;
    if (i < 0) final = 1;
    else
    {
        int j = s.size() - 1;
        while (s[i] > s[j]) j--;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    init();
    while (!final)
    {
        cout << s << "\n";
        generating();
    }

    return 0;
}
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

int n, a[10005], final = 0;


void generating() {
    int i = n - 1;
    while (i >= 1 && a[i] >= a[i + 1]) {
        i--;
    }
    if (i == 0) final = 1;
    else {
        int j = n;
        while (a[i] >= a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    string s; cin >> s;
    n = s.length();
    for (int i = 1; i <= n; i++) {
        a[i] = s[i - 1] - '0';
    }
    generating();
    if (final) cout << "NOT EXIST";
    else {
        for (int i = 1; i <= n; i++) {
            cout << a[i];
        }
    }

    return 0;
}
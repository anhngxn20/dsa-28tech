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

int n, a[1005], b[1005], final = 0;
vector<string> v;

void init() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
        b[i] = i;
    }
}

void generating() {
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) final = 1;
    else a[i] = 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n;
    init();
    while (!final) {
        string s = "";
        for (int i = 1; i <= n; i++) {
            if (a[i]) {
                s += to_string(b[i]);
                if (i != n) s += " ";
            }
        }
        if (s.size()) v.push_back(s);
        generating();
    }
    sort(v.begin(), v.end());
    for (string s : v) cout << s << endl;
    
    return 0;
}
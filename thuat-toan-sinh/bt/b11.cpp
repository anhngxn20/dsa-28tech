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

int n, cnt, a[1005], final = 0;

vector<string> v;

void init() {
    cnt = 1;
    a[1] = n;
}

void generating() {
    int i = cnt;
    while (i >= 1 && a[i] == 1) i--;
    if (i == 0) final = 1;
    else {
        int tmp = cnt - i + 1;
        a[i]--;
        cnt = i;
        int q = tmp / a[i];
        int r = tmp % a[i];
        if (q != 0) {
            for (int j = 1; j <= q; j++) {
                a[i + j] = a[i];
            }
            cnt += q;
        }
        if (r != 0) {
            cnt++;
            a[cnt] = r;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n;
    init();
    while (!final) {
        string s = "";
        for (int i = 1; i <= cnt; i++) {
            s += to_string(a[i]);
            if (i != cnt) s += "+";
        }
        v.push_back(s);
        generating();
    }
    cout << v.size() << endl;
    for (auto s : v) cout << s << endl;
 
    return 0;
}
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

int n, a[1005], final = 0;

void init() {
    a[1] = 1, a[n] = 0;
    for (int i = 2; i < n; i++) {
        a[i] = 0;
    }
}

void generating() {
    int i = n - 1;
    while (i >= 2 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 1) final = 1;
    else a[i] = 1;
}

int check1() {
    int ok = 1;
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[i + 1] && a[i] == 1) {
            ok = 0;
        }
    }
    return ok;
}

int check2() {
    int ok = 1;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) cnt++;
        else cnt = 0;
        if (cnt > 3) ok = 0;
    }
    return ok;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n;
    init();
    while (!final) {
        if (check1() && check2()) {
            for (int i = 1; i <= n; i++) {
                if (a[i] == 1) cout << 8;
                else cout << 6;
            }
            cout << endl;
        }
        generating();
    }

    return 0;
}
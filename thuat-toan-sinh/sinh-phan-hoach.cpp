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

void init() {
    cnt = 1;
    a[1] = n;
}

void generating() {
    int i = cnt;
    while (i >= 1 && a[i] == 1) {
        i--;
    }
    if (i == 0) final = 1;
    else {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i], r = d % a[i];
        for (int j = 1; j <= q; j++) {
            cnt++;
            a[cnt] = a[i];
        }
        if (r){
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
        for (int i = 1; i <= cnt; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        generating();
    }

    return 0;
}
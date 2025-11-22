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
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
}

void generating() {
    int i = n;
    while (i >= 1 && a[i] > a[i + 1]) i--;
    if (i == 0) final = 1;
    else {
        int j = n;
        while (a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n;
    init();
    int b[n]; 
    for (int i = 1; i <= n; i++) cin >> b[i];
    int curr_cnt = 1, cnt = 1;
    while(!final) {
        int ok = 1;
        for (int i = 1; i <= n; i++) {
            if (a[i] != b[i]) ok = 0;
        }
        if (ok) {
            curr_cnt = cnt;
        }
        cnt++;
        generating();
    }
    cout << curr_cnt;

    return 0;
}
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

int n, a[1005];

void init() {
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}

void generating() {
    int i = n;
    while (i >= 1 && a[i] > a[i + 1]) {
        i--;
    }
    if (i == 0) {
        for (int j = 1; j <= n; j++) {
            a[j] = j;
        }
    }
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
    generating();
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
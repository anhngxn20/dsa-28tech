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

int n, k, a[1005], final = 0;

void init() {
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

void generating() {
    int i = k;
    while (i >= 1 && a[i] == n - k + i) {
        i--;
    }
    if (!i) final = 1;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n >> k;
    vector<int> target;
    init();
    for (int i = 1; i <= k; i++) {
        int x; cin >> x;
        target.push_back(x);
    }
    vector<vector<int>> v;
    while(!final) {
        vector<int> tmp;
        for (int i = 1; i <= k; i++) {
            tmp.push_back(a[i]);
        }
        v.push_back(tmp);
        generating();
    }
    auto it = find(v.begin(), v.end(), target);
    cout << distance(it, v.end()) << endl;
    cout << v.end() - it << endl;

    return 0;
}
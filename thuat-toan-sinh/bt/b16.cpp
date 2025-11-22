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
map<int,int> mp;

int generating() {
    int i = k;
    int cnt = k;
    while (i >= 1 && a[i] == n - k + i) i--;
    if (i == 0) return cnt;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
        for (int i = 1; i <= k; i++) {
            if (mp[a[i]]) cnt--;
        }
        return cnt;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    cout << generating() << endl;

    return 0;
}

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
vector<string> v1, v2;

void init() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
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
    cin >> n >> k;
    init();
    while (!final) {
        int cnt_window = 0;
        int cnt = 0;
        string s = "";
        for (int i = 1; i <= n; i++) {
            s += to_string(a[i]);
            if (a[i]) cnt++;
        }
        if (cnt == k) v1.push_back(s);
        int curr_sum = 0;
        // cửa sổ đầu tiên
        for (int i = 1; i <= k; i++) {
            curr_sum += a[i];
        }
        if (curr_sum == k) cnt_window++;
        for (int i = k + 1; i <= n; i++) {
            curr_sum += a[i] - a[i - k];
            if (curr_sum == k) cnt_window++;
        } 
        if (cnt_window == 1) v2.push_back(s);
        generating();
    }
    for (string s : v1) cout << s << " ";
    cout << endl;
    for (string s : v2) cout << s << " ";

    return 0;
}
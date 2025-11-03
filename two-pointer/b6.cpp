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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    int res = 0;
	int cur_sum = 0;
	int l = 0;
	for(int r = 0; r < n; r++) {
		cur_sum += v[r];
        while(cur_sum > s) {
            cur_sum -= v[l];
            l++;
        }
        res += r - l + 1;
	}
	cout << res;

    return 0;
}

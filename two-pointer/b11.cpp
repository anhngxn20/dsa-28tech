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
    int n, target; cin >> n >> target;
	int a[n];
	for (int &x : a) cin >> x;
	sort(a, a + n);
	for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k) {
            int cur_sum = a[j] + a[k];
            if (cur_sum == target - a[i]) {
                cout << "YES";
                return 0;
            } else if (cur_sum < target - a[i]) j++;
            else k--;
        }
    }
	cout << "NO";

    return 0;
}
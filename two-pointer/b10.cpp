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
    int n, k; cin >> n >> k;
	int a[n];
	for (int &x : a) cin >> x;
	sort(a, a + n);
	int l = 0, r = n - 1;
	while (l < r) {
		int cur_sum = a[l] + a[r];
		if (cur_sum == k) {
			cout << "YES";
			return 0;	
		}
		else if (cur_sum < k) l++;
		else r--;
        
	}
	cout << "NO";
    

    return 0;
}
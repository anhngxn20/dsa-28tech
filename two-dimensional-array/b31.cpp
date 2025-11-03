#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <climits>
#include <ctype.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>

#define ll long long
#define fi first
#define se second
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int mod = 1e9 + 7;

ll pascal[1005][1005];

void sinh() {
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				pascal[i][j] = 1;
			}
			else {
				pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
			}
			pascal[i][j] %= mod;
		}
	}
}

int main() {
	faster();
	sinh();
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		cout << pascal[n][k] << endl;
	}

	return 0;
}

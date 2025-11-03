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

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
	faster();
	int n; cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int res = 0;
	for (int i = 1; i < n - 1; i++) {
		for  (int j = 1; j < n - 1; j++) {
			int sum = a[i][j];
			for (int k = 0; k < 8; k++) {
				int i1 = i + dx[k], j1 = j + dy[k];
				sum += a[i1][j1];
			}
			res = max(res, sum);
		}
	}
	cout << res;

	return 0;
}

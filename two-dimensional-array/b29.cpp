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

int dx[4] = {-1, -1, 1, 1};
int dy[4] = {-1, 1, -1, 1};

int n, a[205][205], s, t, cnt = 0;

void nhap() {
	cin >> n >> s >> t;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
}

void dfs(int i, int j) {
	a[i][j] = 1; cnt++;
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k], j1 = j + dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 0) {
			dfs(i1, j1);
		}
	}
}

int main() {
	faster();
	nhap();
	dfs(s, t);
	cout << cnt;

	return 0;
}

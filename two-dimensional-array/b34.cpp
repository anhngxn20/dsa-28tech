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

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

int n, m, a[205][205], b[205][205], chu_vi = 0, max_cv = 0;

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
}

void loang(int i, int j) {
	a[i][j] = 0;
	int cnt = 0;
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k], j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && b[i1][j1] == 1) {
			cnt++;
		}
	}
	chu_vi += 4 - cnt;
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k], j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
			loang(i1, j1);
		}
	}
}

int main() {
	faster();
	nhap();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1) {
				chu_vi = 0;
				loang(i, j);
				max_cv = max(max_cv, chu_vi);
			}
		}
	}
	cout << max_cv;

	return 0;
}

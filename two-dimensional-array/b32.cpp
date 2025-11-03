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

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int n, m, area = 0;
char a[501][501];

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}

void loang(int i, int j) {
	a[i][j] = '.'; area++;
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k], j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '*') {
			loang(i1, j1);
		}
	}
}

int main() {
	faster();
	nhap();
	multiset <int> se;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			area = 0;
			if (a[i][j] == '*') {
				loang(i, j);
			    se.insert(area);	
			}
		}
	}
	for (auto x : se) cout << x << " ";

	return 0;
}

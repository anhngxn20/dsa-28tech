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

int n, m, a[205][205];
ll F[205][205]; 

void nhap() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
}

int main() {
	faster();
	nhap();
	cout << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			F[i][j] = max(F[i-1][j], F[i][j-1]) + a[i][j];
		}
	}
	cout << F[n][m];

	return 0;
}

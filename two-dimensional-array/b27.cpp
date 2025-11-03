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

int n, m, a[1005][1005], temp[1005][1005];
ll F[1005][1005]; 

void nhap() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
}

void convert() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			temp[i][j] = a[j][i];
		}
	}
}

int main() {
	faster();
	nhap();
	convert();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			F[i][j] = max({F[i-1][j-1], F[i-1][j], F[i-1][j+1]}) + temp[i][j];
		}
	}
	sort(F[n], F[n] + n + 1);
	cout << F[n][n];

	return 0;
}

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

int n, m, a[1005][1005];
ll F[1005][1005]; 

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
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
            if (i == 1 && j == 1)
            {
                F[i][j] = a[i][j];
            }
            else 
            {
                if (a[i][j] == 0) F[i][j] = 0;
                else F[i][j] = F[i-1][j] + F[i][j-1];
            }
		}
	}
	cout << F[n][m];

	return 0;
}

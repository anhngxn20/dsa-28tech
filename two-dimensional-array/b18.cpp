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

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void nhap() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
    }
}

int main(){
	faster();
	nhap();
	
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int max_num = 0;
			for (int k = 0; k < 8; k++) {
				int i1 = i + dx[k], j1 = j + dy[k];
				if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] > max_num) {
					max_num = a[i1][j1];
				}
			}
			if (a[i][j] > max_num) cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}

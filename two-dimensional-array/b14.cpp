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

int main() {
	faster();
	int n; cin >> n;
	int a[n][n], cnt = 1;
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	while (h1 <= h2 && c1 <= c2) {
		for (int i = c1; i <= c2; i++) {
			a[h1][i] = cnt;
			cnt++;
		}
		h1++;
		for (int i = h1; i <= h2; i++) {
			a[i][c2] = cnt;
			cnt++;
		}
		c2--;
		for (int i = c2; i >= c1; i--) {
			a[h2][i] = cnt;
			cnt++;
		} 
	    h2--;
	    for(int i = h2; i >= h1; i--) {
	    	a[i][c1] = cnt;
	    	cnt++;
		}
		c1++;
	}
	
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	    	cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

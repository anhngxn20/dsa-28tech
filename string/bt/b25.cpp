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
	int m, s; cin >> m >> s;
	if (s > 9 * m || s == 0 && m > 1) {
		cout << "NOT FOUND";
		return 0;
	}
	else {
		int a[m], b[m];
		int t = s;
		for (int i = 0; i < m; i++) {
			if (s >= 9) {
				a[i] = 9; 
				s -= 9;
			}
			else {
				a[i] = s;
				s = 0;
			}
		}
		t--;
		for (int i = m - 1; i >= 0; i--) {
			if (t >= 9) {
				b[i] = 9;
				t -= 9;
			}
			else {
				b[i] = t; t = 0;
			}
		}
		b[0] += 1;
		for (int x : b) cout << x;
		cout << endl;
		for (int x : a) cout << x;
	}
	
	return 0;
}

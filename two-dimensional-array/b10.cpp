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

int nto(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return n > 1;
}


int main() {
	faster();
	int n; cin >> n;
	vector <vector <int>> v(n, vector<int> (n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	set <int> se;
	for (int i = 0; i < n; i++) {
		if (nto(v[i][i])) se.insert(v[i][i]);
		if (nto(v[i][n - i - 1])) se.insert(v[i][n - i - 1]);
		
	}
	cout << se.size();
	
	return 0;
}

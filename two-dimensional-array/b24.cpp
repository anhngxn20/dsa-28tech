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
	int a[n + 1][n + 1];
	map <int, int> mp;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			if (mp[a[i][j]] == i - 1) mp[a[i][j]] = i;
		}
	}
	
	int ok = 0;
	for (auto p : mp) {
		if (p.se == n){
		    cout << p.fi << " ";
			ok = 1;	
		} 
	}
	if (!ok) cout << "NOT FOUND";
	
	return 0;
}

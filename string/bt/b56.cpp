#include <iostream>
#include <iomanip>
#include <math.h>
#include <numeric>
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
	map <char, int> mp;
	mp['I'] = 1; mp['V'] = 5; mp['X'] = 10; mp['L'] = 50; 
	mp['C'] = 100; mp['D'] = 500; mp['M'] = 1000;
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		int res = 0;
		for (int i = 0; i < s.size() - 1; i++) {
			if (mp[s[i]] < mp[s[i + 1]]) {
				res -= mp[s[i]];
			}
			else res += mp[s[i]];
		}
		res += mp[s[s.size() - 1]];
		cout << res << endl;
	}
	
	
	
	return 0;
}

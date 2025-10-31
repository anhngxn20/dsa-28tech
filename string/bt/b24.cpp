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
	string s; cin >> s;
	map <char, int> mp;
	for (char c : s) mp[c]++;
	
	ll res = 0;
	for (auto p : mp) {
		res += (ll)p.se * (p.se - 1) / 2;
	}
	res += s.size();
	cout << res;
	
	
	return 0;
}

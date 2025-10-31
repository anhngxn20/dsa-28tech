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
	string s;
	getline(cin, s);
	map <char, int> mp;
	vector <char> v;
	for (char c : s) {
		if (!mp[c]) v.push_back(c);
		mp[c]++;
	}
	
	for (auto p : mp) {
		cout << p.fi << " " << p.se << endl;
	}
	cout << endl;
	
	for (char c : v) {
		cout << c << " " << mp[c] << endl;
	}

	return 0;
}

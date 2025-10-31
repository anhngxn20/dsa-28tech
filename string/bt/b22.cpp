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

void to_lower(string &s) {
	for (char &c : s) {
		c = tolower(c);
	}
}

int main() {
	faster();
	string s1, s2, w;
	getline(cin, s1);
	getline(cin, s2);
	for (char &c : s1) c = tolower(c);
	for (char &c : s2) c = tolower(c);
	map <string, int> mp;
	stringstream ss1(s1), ss2(s2);
	while (ss2 >> w) {
		mp[w] = 1;
	}
	while (ss1 >> w) {
		if (!mp[w]) mp[w] = 2;
	}
	for (auto p : mp) {
		if (p.se == 2) cout << p.fi << " ";
	}
	
	return 0;
}

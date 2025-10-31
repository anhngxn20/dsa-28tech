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

int check(string s) {
	int i = 0, j = s.size() - 1;
	while (i < j) {
		if (s[i] != s[j]) return 0;
		i++; j--;
	}
	return 1; 
}

int main() {
	faster();
	string s; 
	map <string, int> mp;
	vector <string> v;
	while (cin >> s) {
		if (!mp[s]) {
			v.push_back(s);
		}
		mp[s]++;
	}
	

	for (auto p : mp) {
		cout << p.fi << " " << p.se << endl;
	}
	cout << endl;
	for (string str : v) {
		cout << str << " " << mp[str] << endl;
	}
	
	return 0;
}

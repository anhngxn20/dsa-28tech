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
	multiset <string> se;
	vector <pair <string, int>> v;
	while (cin >> s) {
		v.push_back({s, s.size()});
		se.insert(s);
	}
	
	sort(v.begin(), v.end(), [](pair<string, int> x, pair<string, int> y) {
		if (x.se == y.se) return x.fi < y.fi;
		return x.se < y.se;
	});
	for (string str : se) {
		cout << str << " ";
	}
	cout << endl;
	for (auto p : v) {
		cout << p.fi << " ";
	}
	
	return 0;
}

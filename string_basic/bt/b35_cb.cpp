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
	map <string, int> mp;
	while (getline(cin, s)) {
		auto it = s.find("-");
		string team1 = s.substr(0, it - 1);
		string team2 = s.substr(it + 2);
		mp[team1]++; mp[team2]++;
	}
	
	vector <pair <string, int>> v;
	for (auto p : mp) {
		v.push_back(p);
	}
	
	sort(v.begin(), v.end(), [](pair<string, int> x, pair <string, int> y) {
		if (x.se == y.se) return x.fi < y.fi;
		return x.se > y.se;
	});
	
	for (auto p : v) {
		cout << p.fi << " " << p.se << endl;
	}

	return 0;
}

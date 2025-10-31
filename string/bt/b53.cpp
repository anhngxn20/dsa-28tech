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
	map <string, int> mp;
	vector <pair <string, int>> v;
	string s;
	while (getline(cin, s)) {
	    auto it = s.find('-');
		string l = s.substr(0, it - 1);
		string r = s.substr(it + 2);
		stringstream ss1(l), ss2(r);
		vector <string> a, b;
		string w;
		while (ss1 >> w) {
			a.push_back(w);
		}
		while (ss2 >> w) {
			b.push_back(w);
		}
		string team1 = "", team2 = "";
		for (int i = 0; i < a.size() - 1; i++) {
			team1 += a[i] + " ";
		}	
		team1.pop_back();
		mp[team1] += stoi(a[a.size() - 1]);
		
		for (int i = 1; i < b.size(); i++) {
			team2 += b[i] + " ";
		}
		team2.pop_back();
		mp[team2] += stoi(b[0]);
	}
	
	for (auto p : mp) {
		v.push_back(p);
	}
	
	sort(v.begin(), v.end(), [] (pair<string,int> x, pair<string, int> y) {
		if (x.se == y.se) return x.fi < y.fi;
		return x.se > y.se;
	});
	for (auto p : v) {
		cout << p.fi << " " << p.se << endl;
	}
	
	return 0;
}

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
	set <string> se;
	vector <pair <string, int>> v;
	while (cin >> s) {
		if (check(s) && se.find(s) == se.end()) {
			v.push_back({s, s.size()});
			se.insert(s);
		}
	}
	
	stable_sort(v.begin(), v.end(), [](pair<string, int> x, pair<string, int> y) {
		return x.se < y.se;
	});

	for (auto p : v) {
		cout << p.fi << " ";
	}
	
	return 0;
}

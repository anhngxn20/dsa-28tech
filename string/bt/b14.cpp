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
	string s, w;
	getline(cin, s);
	stringstream ss(s);
	map <string, int> mp;
	while (ss >> w) {
		mp[w]++;
	}
	int max_freq = 0, min_freq = INT_MAX;
	string s1 = " ", s2 = " ";
	for (auto p : mp) {
		if (p.se >= max_freq) {
			max_freq = p.se;
			s1 = p.fi;
		}
		if (p.se <= min_freq) {
			min_freq = p.se;
			s2 = p.fi;
		}
	}
	cout << s1 << " " << max_freq << endl;
	cout << s2 << " " << min_freq << endl;
	
	return 0;
}

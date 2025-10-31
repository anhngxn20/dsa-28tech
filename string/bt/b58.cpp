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

void chuan_hoa(string &s) {
	for (char &c : s) {
		if (c != '^' && !isdigit(c) && c != 'x') c = ' '; 
	}
}

int main() {
	faster();
	int n; cin >> n;
	cin.ignore();
	while (n--) {
		map <string, int> mp;
	    string s, w, res = ""; getline(cin, s);
		chuan_hoa(s);
		stringstream ss(s);
		while (ss >> w) {
			int idx = 0;
			string heso = "";
			for (int i = 0; i < w.size(); i++) {
				if (isdigit(w[i])) heso += w[i];
				else {
					idx = i;
					break;
				}
			}
			string bien = w.substr(idx);
			mp[bien] += stoi(heso);
		}
		for (auto p : mp) {
			res += to_string(p.se);
			res += p.fi;
			res += " + ";
		}
		res.pop_back();
		res.pop_back();
		res.pop_back();
		cout << res << endl;
	}
	
	return 0;
}

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

void chuan_hoa (string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '0') {
			s = s.substr(i);
			return;
		}
	}
	s = "0";
}


int main() {
	faster();
	
	string s; cin >> s;
	for (char &c : s) {
		if (!isdigit(c)) c = ' ';
	}
	stringstream ss(s);
	string num;
	vector <string> v;
	while (ss >> num) {
		chuan_hoa(num);
	    v.push_back(num);
	}
	sort(v.begin(), v.end(), [](string x, string y) {
		if (x.size() == y.size()) return x > y;
		return x.size() > y.size();
	});
	cout << v[0];
	
	return 0;
}

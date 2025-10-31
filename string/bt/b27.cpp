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
	string s; cin >> s;
	s += s[s.size() - 1];
	string tmp = "";
	tmp += s[0];
	string res = tmp;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i-1]) tmp += s[i];
		else {
			if (tmp.size() > res.size()) res = tmp;
			else if (tmp.size() == res.size()) {
				res = max(res, tmp);
			}
			tmp = ""; tmp += s[i];
		}
	}
	cout << res;
	
	return 0;
}

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
	string s; cin >> s;
	string res = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '4') res += "223";
		else if (s[i] == '6') res += "35";
		else if (s[i] == '8') res += "2227";
		else if (s[i] == '9') res += "2337";
		else {
			if (s[i] - '1' > 0) res += s[i];
		}
	}
	sort(res.begin(), res.end(), greater<char>());
	cout << res;
	
	return 0;
}

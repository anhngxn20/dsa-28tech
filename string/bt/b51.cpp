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
	string s, res = ""; cin >> s;
	s += '#';
	int cnt = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) cnt++;
		else {
			res += s[i - 1];
			res += cnt + '0';
			cnt = 1;
		}
	}
	cout << res;
	
	return 0;
}

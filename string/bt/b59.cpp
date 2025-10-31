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

int F[1000005];

int main() {
	faster();
	string s; cin >> s;
	int max_len = 0, cnt1 = 0, cnt0 = 0;
	s = "0" + s;
	map <int, int> mp;
	mp[0] = 0;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == '0') cnt0++;
		else cnt1++;
		F[i] = cnt0 - cnt1;
		
		if (mp.find(F[i]) == mp.end()) {
			mp[F[i]] = i;
		}
		else {
			int len = i - mp[F[i]];
			max_len = max(max_len, len);
		}
	}
	cout << max_len;

	return 0;
}

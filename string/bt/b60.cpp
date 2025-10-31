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
	int res = 0, cnt_8 = 0, cnt_t = 0, cnt_2 = 0;
	map <pair<int, int>, int> mp;
	mp[{0, 0}] = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '2') cnt_2++;
		else if (s[i] == '8') cnt_8++;
		else cnt_t++;
	    pair<int,int> p = {cnt_2 - cnt_8, cnt_8 - cnt_t};
		
		res += mp[p];
		mp[p]++;
	}
	cout << res;

	return 0;
}

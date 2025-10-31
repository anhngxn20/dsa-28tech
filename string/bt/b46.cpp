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
	ll res = 0;
	for (int i = 0; i < s.size(); i++) {
		res = res * 10 + (s[i] - '0');
		res %= 4;
	}
	
	if (res == 0) cout << 4;
	else cout << 0;
	
	return 0;
}

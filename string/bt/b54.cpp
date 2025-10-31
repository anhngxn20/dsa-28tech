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
	int n; cin >> n;
	while (n--) {
		int ok = 1, cnt[256] = {0};
	    string s, t; cin >> s >> t;
	    for (char c : s) cnt[c]++;
	    for (char c : t) cnt[c]--;
	    for (int x : cnt) {
	    	if (x) {
	    		ok = 0;
	    		break;
			}
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}
	
	
	
	return 0;
}

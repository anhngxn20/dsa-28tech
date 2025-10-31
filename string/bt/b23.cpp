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
	int n; cin >> n;
	vector<string> v;
	while (n--) {
		string s; cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), [] (string x, string y) {
		string temp1 = x + y;
		string temp2 = y + x;
		return temp1 < temp2;
	});
	for (auto it = v.rbegin(); it != v.rend(); it++) {
		cout << *it;
	}
	
	return 0;
}

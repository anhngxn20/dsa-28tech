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
	int ok = 0;
	string s; cin >> s;
	if (s.size() > 1) {
		string t = "";
		t += s[s.size() - 2];
	    t += s[s.size() - 1];
	    if (stoi(t) % 4 == 0) ok = 1;
	}
	else {
		if (stoi(s) % 4 == 0) ok = 1;
	}
	
	if (ok) {
		cout << "YES";
	}
	else cout << "NO";
	
	return 0;
}

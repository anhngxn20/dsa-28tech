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

int ko_tang(string s) {
	for (int i = 1; i < s.size(); i++) {
		if (s[i] > s[i - 1]) {
		    return 0;
	    }	
	}
	return 1;
}

int ko_giam(string s) {
	for (int i = 1; i < s.size(); i++) {
		if (s[i] < s[i - 1]) {
		    return 0;
	    }	
	}
	return 1;
}

int main() {
	faster();
	
	string s; cin >> s;
	if (ko_tang(s) || ko_giam(s)) {
		cout << "YES";
	}
	else cout << "NO";
	
	return 0;
}

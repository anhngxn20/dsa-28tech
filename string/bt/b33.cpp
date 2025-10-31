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

int check1 (string s) {
	for (char c : s) {
		if (c == '6') {
		    return 1;
	    }	
	}
	return 0;
}

int check2 (string s) {
	int i = 0, j = s.size() - 1;
	while (i < j) {
		if (s[i] != s[j]) return 0;
		i++; j--;
	}
	return 1;
}


int main() {
	faster();
	
	string s; cin >> s;
	if (check2(s) && check1(s)) {
		cout << "YES";
	}
	else cout << "NO";
	
	return 0;
}

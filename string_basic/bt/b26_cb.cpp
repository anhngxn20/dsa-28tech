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

int check1(string s) {
	int x = s.size() - 1;
	return (s[0] - '0') % 2 == (s[x] - '0') % 2;
}

int check2(string s) {
	for (int i = 1; i < s.size(); i++) {
		if (abs(s[i] - s[i - 1]) == 3) return 0;
	}
	return 1;
}

int check3(string s) {
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == 2 && s[i - 1] == 8 ||
		    s[i] == 8 && s[i-1] == 2) return 0;
	}
	return 1;
} 

int main(){
	faster();
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		if (check1(s) && check2(s) && check3(s)) {
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}

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
	string s1, s2; cin >> s1 >> s2;
	set <char> se1, se2;
	
	for (char c : s1) {
		if (s2.find(c) == string::npos) se1.insert(c);
	}
	for (char c : s2) {
		if (s1.find(c) == string::npos) se2.insert(c);
	}
	for (char c : se1) cout << c;
	cout << endl;
	for(char c : se2) cout << c;

	return 0;
}

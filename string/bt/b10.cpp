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
	string s; 
	set <string> se;
	vector <string> v;
	while (cin >> s) {
		if (se.find(s) == se.end()) v.push_back(s);
		se.insert(s);
	}
	
	for (string str : se) {
		cout << str << " ";
	}
	cout << endl;
	for (string str : v) {
		cout << str << " ";
	}
	
	return 0;
}

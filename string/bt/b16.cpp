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

string normal_name(string s) {
	stringstream ss(s);
	string res = "", w;
	while (ss >> w) {
		res += (char)toupper(w[0]);
		for (int i = 1; i < w.size(); i++) {
			res += (char)tolower(w[i]);
		}
		res += " ";
	}
	res.pop_back();
	return res;
}

void normal_birth(string &s) {
	//string res = s.substr(0);
	if (s[1] == '/') s = '0' + s;
	if (s[4] == '/') s.insert(3, "0");
	//return res;
}

int main() {
	faster();
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	string name = normal_name(s1);
	//string birth = normal_birth(s2);
	normal_birth(s2);
	cout << name << endl;;
	cout << s2;
	
	return 0;
}

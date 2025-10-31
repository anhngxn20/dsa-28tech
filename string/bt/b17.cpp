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

void to_upper(string &s) {
	for (char &c : s) {
		c = toupper(c);
	}
}

int main() {
	faster();
	string s; getline(cin, s);
	vector <string> v;
	stringstream ss(s);
	string w;
	while (ss >> w) {
		w[0] = toupper(w[0]);
		for (int i = 1; i < w.size(); i++) {
			w[i] = tolower(w[i]);
		}
		v.push_back(w);
	}
	to_upper(v[v.size() - 1]);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i == v.size() - 2) cout << ", ";
		else cout << " ";
	}
	cout << endl;
	cout << v[v.size() - 1] << ", ";
	for (int i = 0; i < v.size() - 1; i++) {
		cout << v[i] << " ";
	}
	
	return 0;
}

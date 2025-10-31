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

map <string, int> mp;

int check(string s) {
	stringstream ss(s);
	vector <string> v;
	string word;
	while (getline(ss, word, '@')) {
		v.push_back(word);
	}
	
	if (!mp[v[1]]) return 0;
	if (v.size() != 2) return 0;
	for (int i = 0; i < v[0].size(); i++) {
		if (!isalnum(v[0][i]) && v[0][i] != '_') return 0;
	}
	return 1;
}


int main(){
	faster();
	string a[] = {"gmail.com", "28tech.com.vn", "yahoo.com", "hotmail.com"};
	for (string s : a) mp[s] = 1;
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		if (check(s)) cout << "YES\n";
		else cout << "NO\n";
	}
}

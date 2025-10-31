#include <iostream>
#include <iomanip>
#include <math.h>
#include <numeric>
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

void chuan_hoa1(string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (!isdigit(s[i])) s[i] = ' ';
	}
}

void chuan_hoa2(string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (isdigit(s[i])) s[i] = ' ';
	}
}

int main() {
	faster();
	string s; cin >> s;
	string temp, w; temp = s; 
	
	chuan_hoa1(temp);
	stringstream ss1(temp);
	vector <int> freq;
	while (ss1 >> w) {
		freq.push_back(stoi(w));
	}
	
	chuan_hoa2(s);
	stringstream ss2(s);
	vector <string> v;
	while (ss2 >> w) {
		v.push_back(w);
	}
	
	int idx = 0;
	while (idx < v.size()) {
		for (int i = 0; i < freq[idx]; i++) {
			cout << v[idx];
		}
		idx++;
	}
	
	
	return 0;
}

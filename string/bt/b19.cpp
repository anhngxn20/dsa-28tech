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
	map <string, int> mp;
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s; 
		getline(cin, s);
		for (char &c : s) c = tolower(c);
		stringstream ss(s);
		string w;
		vector <string> v;
	    while (ss >> w) v.push_back(w);
	    string email = v[v.size() - 2];
	    for (int i = 0; i < v.size() - 2; i++) email += v[i][0];
	    mp[email]++;
	    if (mp[email] == 1) cout << email;
	    else cout << email << mp[email];
	    cout << "@xyz.edu.vn\n";
	    
	    string birth = v[v.size() - 1];
	    stringstream ss2(birth);
	    while (getline(ss2, w, '/')) {
	    	cout << stoi(w);
		}
		cout << endl;
	}
	
	return 0;
}

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

string tach(string s) {
	stringstream ss(s);
    string d, m, y;
    getline(ss, d, '/');
    getline(ss, m, '/');
    getline(ss, y, '/');
	return y + " " + m + " " + d;
}

int main(){
	faster();
	string s1, s2; cin >> s1 >> s2;
	string t1 = tach(s1);
	string t2 = tach(s2);
	if (t1 == t2) cout << "30tech";
	else if (t1 < t2) cout << "28tech";
	else cout << "29tech";
}

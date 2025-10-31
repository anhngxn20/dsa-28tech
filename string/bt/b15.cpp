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
	string s, t;
	getline(cin, s);
	getline(cin, t);
	if (s.find(t) != string::npos) {
		cout << "YES";
	}
	else cout << "NO";
	
	return 0;
}

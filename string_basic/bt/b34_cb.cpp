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

int cnt[256];

int main(){
	faster();
	string s;
	map <string, int> mp;
	while (getline(cin, s)) {
		mp[s]++;
	}
	for (auto p : mp) {
		cout << p.fi << " " << p.se << endl;
	}
}

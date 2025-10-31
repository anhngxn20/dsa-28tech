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
	string s; cin >> s;
	int k; cin >> k;
	for (int i = s.size() - 1; i >= s.size() - k ; i--) {
		if (s[i] == '1') {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	
	return 0;
}

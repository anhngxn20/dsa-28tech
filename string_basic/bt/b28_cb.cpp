#include <iostream>
#include <math.h>
#include <algorithm>
#include <climits>
#include <vector>
#include <set>
#include <map>
#include <string>

#define ll long long
#define fi first
#define se second

using namespace std;

int main() {
	string n, m; cin >> n >> m;
	if (n.size() == m.size()) {
		if (n > m) cout << "28tech";
		else if (n == m) cout << "30tech";
		else cout << "29tech";
	}
	else {
		if (n.size() > m.size()) cout << "28tech";
		else cout << "29tech";
	}

	return 0;
}

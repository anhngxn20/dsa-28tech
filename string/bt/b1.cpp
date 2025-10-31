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
	string s;
	getline(cin, s);
	int dem1 = 0, dem2 = 0, dem3 = 0;
	for (char c : s) {
		if (isdigit(c)) dem2++;
		else if (isalpha(c)) dem1++;
		else dem3++;
	}
	cout << dem1 << " " << dem2 << " " << dem3;

	return 0;
}

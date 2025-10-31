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
	string s1, s2 = "python"; cin >> s1;
	//for (char &c : s1) c = tolower(c);
	int i = 0, j = 0;
	while (i < s1.size() && j < s2.size()) {
		if (s1[i] == s2[j]) {
			i++; j++;
		}
		else i++;
	}
	if (j != s2.size()) cout << "NO";
	else cout << "YES";
	
	return 0;
}

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
	string s1, s2; cin >> s1 >> s2;
	for (char c : s1) cnt[c]++;
	for (char c : s2) cnt[c]--;
	for (int i = 0; i < 256; i++) {
		if (cnt[i]) {
			cout << "29tech";
			return 0;
		}
	}
	cout << "28tech";
}

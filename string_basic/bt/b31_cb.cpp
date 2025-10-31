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
	string s; cin >> s;
	for (char c : s) cnt[int(c)]++;
	for (int i = 0; i < 256; i++) {
		if (cnt[i]) {
			cout << char(i) << " " << cnt[i] << endl;
		}
	}
}

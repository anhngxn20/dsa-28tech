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
	int current_len = 1, max_len = 0, start = 0;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			current_len++;
		}
		else {
			if (current_len > max_len) {
				max_len = current_len;
				start = i - max_len;
			}
			else if (current_len == max_len) {
				if (s[i - 1] > s[start]) {
					start = i - max_len;
				}
			}
			current_len = 1;
		}
	}
	
	if (current_len > max_len) {
		max_len = current_len;
		start = s.size() - max_len;
	}
	else if (current_len == max_len) {
		if (s[s.size() - 1] > s[start]) {
			start = s.size() - max_len;
		}
	}
	
	for (int i = start; i < start + max_len; i++) {
		cout << s[i];
	}
	
	return 0;
}

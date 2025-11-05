#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <numeric>
#include <cctype>
#include <string>
#include <sstream>

#define ll long long
#define fi first
#define se second

using namespace std;

bool prime(long long n) {
	
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

bool perfectNumber(long long n) {
	
	for (int p = 1; p <= 33; p++) {
		if (prime(p))
		{
			long long temp1 = pow(2, p) - 1;
			if (prime(temp1))
			{
				long long temp2 = pow(2, p - 1) * temp1;
				if (temp2 == n)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    ll n; cin >> n;
	if (perfectNumber(n)) cout << "YES";
	else cout << "NO";

    return 0;
}
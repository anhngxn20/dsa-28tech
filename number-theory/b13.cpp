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

long long lagrange(long long n, int p)
{
	long long result = 0;
	for (long long i = p; i <= n; i*=p)
	{
		result += n / i;
	}
	return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    long long n;cin >> n;
	int p; cin >> p;
	cout << lagrange(n, p);

    return 0;
}
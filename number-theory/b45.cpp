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

bool sodep(int n)
{
	for (int i = n / 111; i > 0; i--)
	{
		if ((n - 111 * i) % 11 == 0)
		{
			return true;
		}
	}
	return false;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n; cin >> n;
	
	if (sodep(n)) cout << "yes";
	else cout << "no";

    return 0;
}
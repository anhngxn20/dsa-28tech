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

// Công thức phi Euler : N * tổng của ( 1 - 1 / p). Trong đó p là thừa số nguyên tố của N

ll check(ll n){
	ll res = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			res = res - res / i;
		while(n % i == 0){
			n /= i;
		}
	}
	if(n > 1){
		res -= res / n;
	}
	return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    ll n; cin >> n;
    cout << check(n);

    return 0;
}
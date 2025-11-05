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


ll gcd( ll a, ll b){
	if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm( ll a, ll b){
	return a / gcd(a,b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int x, y, z, n;
	cout << x << y << z << n;
	ll bc = lcm( x, lcm( y, z) );
	ll tmp = (ll)pow(10,n-1); //so nho nhat co n chu so
	ll kq = (tmp + bc - 1) / bc * bc;
	if( kq < pow(10,n)) cout << kq;
	else cout << -1;

    return 0;
}
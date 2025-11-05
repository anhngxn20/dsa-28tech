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

int fibo(ll n){
    ll f1 = 1, f2 = 1, fn;
    if(n == 1 || n == 2 || n == 0) return 1;
    for(int i = 3; i <= 92; i++){
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        if(fn == n) return 1;
    }
    return 0;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    ll n; cin >> n;
    if(fibo(n)) cout << "YES";
    else cout << "NO";

    return 0;
}
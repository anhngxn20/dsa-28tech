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
#define MOD 1000000007

using namespace std;

void mul_matrix(long long fibo[2][2], long long y[2][2]) {
    long long a = (fibo[0][0] * y[0][0] + fibo[0][1] * y[1][0]) % MOD;
    long long b = (fibo[0][0] * y[0][1] + fibo[0][1] * y[1][1]) % MOD;
    long long c = (fibo[1][0] * y[0][0] + fibo[1][1] * y[1][0]) % MOD;
    long long d = (fibo[1][0] * y[0][1] + fibo[1][1] * y[1][1]) % MOD;

    fibo[0][0] = a;
    fibo[0][1] = b;
    fibo[1][0] = c;
    fibo[1][1] = d;
}

void luythua_matran(long long fibo[2][2], int k) {
    if (k >= 2) {
        long long x[2][2] = {
            {fibo[0][0], fibo[0][1]},
            {fibo[1][0], fibo[1][1]}
        };

        luythua_matran(fibo, k / 2);

        if (k % 2 == 0) {
            mul_matrix(fibo, fibo);
        } else {
            long long kq[2][2] = {
                {fibo[0][0], fibo[0][1]},
                {fibo[1][0], fibo[1][1]}
            };
            mul_matrix(fibo, fibo);
            mul_matrix(fibo, x);
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int t = 1;
    while (t--) {
        ll n; cin >> n;
        if (n == 1) {
            cout << 0;
        } else if (n == 2) {
            cout << 1;
        } else {
            long long fibo[2][2] = {{1, 1}, {1, 0}};
            luythua_matran(fibo, n - 2);
            cout << fibo[0][0];
        }
    }

    return 0;
}
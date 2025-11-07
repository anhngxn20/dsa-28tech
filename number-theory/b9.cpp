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

vector<bool> sieve(ll n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    ll N; cin >> N;

    ll limit = sqrtl(N);
    vector<bool> isPrime = sieve(limit);

    ll cnt = 0;
    for (ll p = 2; p <= limit; p++) {
        if (isPrime[p] && 1ll * p * p <= N) {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}
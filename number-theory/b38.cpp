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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int N;
    cin >> N;
    vector<bool> is_prime(N + 1, true);
    is_prime.assign(N + 1, true);
    if(N >= 0) is_prime[0] = false;
    if(N >= 1) is_prime[1] = false;
    for(int i = 2; 1LL * i * i <= N; ++i)
        if(is_prime[i])
            for(long long j = 1LL * i * i; j <= N; j += i)
                is_prime[(int)j] = false;

    vector<int> primes;
    for(int i = 2; i <= N; ++i) if(is_prime[i]) primes.push_back(i);
    long long ans = 1;
    for(int p : primes){
        long long e = 0;
        long long pk = p;
        while(pk <= N){
            e += N / pk;
            if (pk > (long long)N / p) break; 
            pk *= p;
        }
        ans = (ans * (e + 1)) % MOD;
    }
    cout << ans;

    return 0;
}
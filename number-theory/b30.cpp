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
#include <bitset>

#define ll long long
#define fi first
#define se second

using namespace std;

bitset<10000001> p;
void sieve(int n){
    p[0] = p[1] = 1;
    for (long long i = 2; i * i <= n; i++){
        if (p[i] == 0){
            for (int j = i * i; j <= n; j += i) p[j] = 1;
        }
    }
}

int check(int n){
    int d, max = n % 10;
    n /= 10;
    while (n){
        d = n % 10;
        if (d > max) return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, cnt = 0;
    cin >> n;
    sieve(n);
    for (int i = 2; i <= n; i++){
        if (p[i] == 0 && check(i)){
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl << cnt;

    return 0;
}
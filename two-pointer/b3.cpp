#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, m; cin >> n >> m;
    unordered_map<int, int> mp;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x;
        mp[x]++;
    }
    ll res = 0;
    for(int i = 0 ; i < m ; i++){
        int x; cin >> x;
        res += mp[x];
    }
    cout << res;
    
    
    return 0;
}
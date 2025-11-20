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

int n, final = 0;

string a[1005];

void init() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    cin >> n;
    string s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cout << a[i] << endl;
    }

    return 0;
}
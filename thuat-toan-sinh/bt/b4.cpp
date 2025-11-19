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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n; cin >> n;
    for(int i = 0; i < (1 << n); i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (i & (1 << j)) cout << 'A';
            else cout << 'B';
        }
        cout << endl;
    }

    return 0;
}
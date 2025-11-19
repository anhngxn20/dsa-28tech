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
    int A = 39;
    for (int j = 7; j >= 0; j--) {
        // 1 << j = pow(2, j)
        if (A & (1 << j)) {
            cout << 1;
        }
        else cout << 0;
    }

    return 0;
}
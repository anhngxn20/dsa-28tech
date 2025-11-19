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
    int a[5] = {3, 8, 9, 2, 1};
    next_permutation(a, a + 5);
    for (int x : a) cout << x << " ";
    cout << endl;
    prev_permutation(a, a + 5);
    for (int x : a) cout << x << " ";

    return 0;
}
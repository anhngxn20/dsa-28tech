#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>

#define ll long long
#define fi first
#define se second

using namespace std;

bool bs(int a[], int l, int r, int X) {
    while (l <= r)
    {
        /* code */
        int m = (l + r) / 2;
        if (a[m] == X) {
            return true;
        } 
        else if (a[m] < X) {
            l = m + 1;
        } 
        else {
            r = m - 1;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int a[] = {1, 2, 3, 4, 6, 23 ,34 ,45, 65, 66};
    int n = size(a);
    cout << bs(a, 0, n - 1, 4) << endl;
    cout << binary_search(a, a + n, 5) << endl;

    return 0;
}
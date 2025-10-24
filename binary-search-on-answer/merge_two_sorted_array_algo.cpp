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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int a[] = {3, 5, 6, 8, 9, 14, 24};
    int b[] = {2, 3, 7, 8, 8, 10, 12};
    int i = 0, j = 0, n = size(a), m = size(b);
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            cout << a[i] << " ";
            i++;
        }
        else {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }

    while (j < m)
    {
        cout << a[j] << " ";
        j++;
    }
    
    return 0;
}
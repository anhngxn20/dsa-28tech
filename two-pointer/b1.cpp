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

int n, m;
int a[10000005], b[10000005];

void nhap() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];    
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    nhap();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j]) {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n) {
        cout << a[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }

    return 0;
}
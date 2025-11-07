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
#define mod 1000000007;

using namespace std;

ll F[105][105];

void sinh() {
    for (int i = 1; i < 105; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j) F[i][j] = 1;
            else F[i][j] = (F[i-1][j-1] + F[i-1][j]) % mod;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n; cin >> n;
    sinh();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << F[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
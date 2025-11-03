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
    int n, target;
    cin >> n >> target;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int i1 = 0; i1 < n; i1++)
    {
        for (int i2 = i1 + 1; i2 < n; i2++)
        {
            int i3 = i2 + 1, i4 = n - 1;
            while (i3 < i4)
            {
                int cur_sum = a[i1] + a[i2] + a[i3] + a[i4];
                if (cur_sum == target)
                {
                    cout << "YES";
                    return 0;
                }
                else if (cur_sum > target) i4--;
                else i3++;
                
            }
        }
    }
    cout << "NO";

    return 0;
}
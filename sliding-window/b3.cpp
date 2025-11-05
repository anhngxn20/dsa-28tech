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
    int n, k; cin >> n >> k;
    int a[n]; for (int &x : a) cin >> x;
    multiset<int> ms(a, a + k); //khoi tao multiset chua a[0] den a[k-1];
    multiset<int>::iterator med = next(ms.begin(), (k -1) / 2); // khoi tao it, tro vao phan tu median
    cout << *med << " ";  // median cua so dau tien
    for (int i = 1; i < n - k + 1; i++)
    {
        ms.insert(a[i + k - 1]);
        if (a[i + k -1] < *med) med--; // phan tu moi them vao < median
        if(a[i-1] <= *med) med++;
        auto it = ms.find(a[i - 1]); // phan tu bi xoa <= median
        ms.erase(it);
        cout << *med << " ";
    }

    return 0;
}
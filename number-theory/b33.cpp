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
    char n[20];
    cin >> n;
    
    int cnt[10] = {0};
    for (int i = 0; n[i] != '\0'; i++){
        int d = n[i] - '0';
        if (d == 2 || d == 3 || d == 5 || d == 7) cnt[d]++;
    }

    for (int i = 2; i <= 7; i++){
        if (cnt[i]){
            cout << i << " " << cnt[i] << "\n";
        }
    }
    cout << "\n";
    for (int i = 0; n[i] != '\0'; i++){
        int d = n[i] - '0';
        if ((d == 2 || d == 3 || d == 5 || d == 7) && cnt[d]){
            cout << d << " " << cnt[d] << "\n";
            cnt[d] = 0;
        }
    }

    return 0;
}
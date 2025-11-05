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
    ll N; cin >> N;
    bool first = true;

    for(int i = 2; i*i <= N; i++){
        int count = 0;
        while(N%i == 0){
            count++;
            N /= i;
        }
        if(count > 0){
            if(!first) cout << " * ";
            cout << i << "^" << count;
            first = false;
        }
    }

    if(N > 1){
        if(!first) cout << " * ";
        cout << N << "^" << 1;
    }
    return 0;

    return 0;
}
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


int d[1000005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n; cin >> n;
	int a[n];
	for(int &x : a){
		cin >> x;
		d[x]++;
	}
	int max_val = *max_element(a, a+n);
	for(int i = max_val; i >= 1; i--){
		int dem = 0;
		for(int j = i; j <= max_val; j+=i) {
			dem += d[j];
		}
		if(dem >= 2){
			cout << i;
			return 0;
		}
	}

    return 0;
}
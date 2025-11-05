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
    long long n;
    cin >> n;
    map<long long, int> uoc;
    while (n%2==0) {
    	uoc[2]++;
    	n /= 2;
	}
	for (long long i=3; i*i <= n; i+=2) {
		while (n%i==0) {
			uoc[i]++;
			n /= i;
		}
	}
	if (n>2) {
		uoc[n]++;
	}
	long long sum = 1;
	for (auto x : uoc) {
		long long k = x.first;
		long long temp_sum = 0;
		for (int i=0; i<= x.second; i++) {
			temp_sum += pow(k, i);
		}
		sum *= temp_sum;
	}
	cout << sum << endl;

    return 0;
}
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

int tongso( int n){
	int sum = 0;
	while ( n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int smith( int n ){
	int sum1 = 0 ;
	int sum2 = tongso (n);
	int temp = n;
	for (int i = 2 ; i <= sqrt(n) ; i++){
		if (n % i == 0){
			while ( n % i == 0){
				sum1 += tongso(i);
				n /= i;
			}
		}
	}
	if (temp == n) return 0;
	if (n > 1) sum1+= tongso(n);
	if (sum1 == sum2 ) return 1;
	else return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n ; cin >> n;
	if (smith(n)) cout << "YES";
	else cout << "NO";

    return 0;
}
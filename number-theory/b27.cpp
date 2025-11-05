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

vector<int> v;

void sinh_palin(){
	for(int half = 1; half <= 9999; half++){
		string s = to_string(half);
		string rev = s;
		reverse(rev.begin(), rev.end());
		
		// palindrome chẵn chữ số
		int even_pal = stoi(s + rev);
		if(even_pal <= 10000000)
			v.push_back(even_pal);
		// palindrome lẻ chữ số	
		for(char c = '0'; c <= '9'; c++){
			int odd_pal = stoi(s + c + rev);
			if(odd_pal <= 10000000)
				v.push_back(odd_pal);
		}
	}
}


bool so_dep(int n){
	int dem = 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			dem++;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n > 1) dem++;
	return dem >= 3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int a, b; cin >> a >> b;
	bool ok = true;
	sinh_palin();
	sort(v.begin(), v.end());
	for(int x : v){
		if(x >= a && x <= b && so_dep(x)){
			ok = false;
			cout << x << " ";
		}
	}
	if(ok) cout << "-1";

    return 0;
}
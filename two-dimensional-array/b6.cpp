#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

#define ll long long
#define F first
#define S second

using namespace std;



int main() {
	int n; cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == j) swap(a[i][j], a[i][n - i - 1]);
        }
    }
    
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

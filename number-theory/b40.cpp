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
    string s; cin >> s;
    int n = s.back();
    int tong;
    if(s.size()==1){
        tong=n;
    }
    else{
        int n1 = s[s.size() - 2];
        tong=n1*10+n;
    }
    if(tong%4==1) printf("8");
    else if(tong%4==2) printf("4");
    else if(tong%4==3) printf("2");
    else printf("6");

    return 0;
}
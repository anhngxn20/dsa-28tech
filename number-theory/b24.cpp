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
    ll n;cin>>n;
    map<ll,ll> mp;
    while(n%2==0){
        mp[2]++;
        n/=2;
    }
    while(n%3==0){
        mp[3]++;
        n/=3;
    }
    for(ll i=5;i*i<=n;i+=6){
        while(n%i==0){
            mp[i]++;
            n/=i;
        }
        while(n%(i+2)==0){
            mp[i+2]++;
            n/=(i+2);
        }
    }
    if(n>1) mp[n]++;
    ll res=1;
    for(auto x:mp){
        res*=(x.se+1);
    }
    cout<<res;

    return 0;
}
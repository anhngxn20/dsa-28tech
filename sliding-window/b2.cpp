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
    multiset<int> ms;
    for (int i = 0; i < k; i++)
    {
        ms.insert(a[i]);
    }
    cout << *ms.begin() << " " << *ms.rbegin() << endl;
    for (int i = 1; i < n-k+1; i++)
    {
        auto it = ms.find(a[i-1]);
        ms.erase(it);
        ms.insert(a[i + k -1]);
        cout << *ms.begin() << " " << *ms.rbegin() << endl;
    }

    // Cach 2:
    // deque<int> dq_min, dq_max;
    // for (int i = 0; i < n; i++) {
    //     // Loại bỏ phần tử ra khỏi cửa sổ
    //     while (!dq_min.empty() && dq_min.front() <= i - k) dq_min.pop_front();
    //     while (!dq_max.empty() && dq_max.front() <= i - k) dq_max.pop_front();

    //     // Duy trì min deque
    //     while (!dq_min.empty() && a[dq_min.back()] >= a[i]) dq_min.pop_back();
    //     dq_min.push_back(i);

    //     // Duy trì max deque
    //     while (!dq_max.empty() && a[dq_max.back()] <= a[i]) dq_max.pop_back();
    //     dq_max.push_back(i);

    //     // Khi cửa sổ đủ k phần tử, in ra kết quả
    //     if (i >= k - 1) {
    //         cout << a[dq_min.front()] << " " << a[dq_max.front()] << '\n';
    //     }
    // }

    // Cach 3:
    // deque<int> q1, q2;
    // for(int i=0; i<k; i++){
    //     while(!q1.empty() && a[i] > a[q1.back()]){
    //         q1.pop_back();
    //     }
    //     q1.push_back(i);

    //     while(!q2.empty() && a[i] < a[q2.back()]){
    //         q2.pop_back();
    //     }
    //     q2.push_back(i);
    // }
    // cout << a[q2.front()] << ' ' << a[q1.front()] << endl;


    // for(int i=k; i<n; i++){
    //     if(q1.front() <= i-k)
    //         q1.pop_front();

    //     if(q2.front() <= i-k)
    //         q2.pop_front();

    //     while(!q2.empty() && a[i] < a[q2.back()]){
    //         q2.pop_back();
    //     }
    //     q2.push_back(i);
    //     cout << a[q2.front()] << ' ';

    //     while(!q1.empty() && a[i] > a[q1.back()]){
    //         q1.pop_back();
    //     }
    //     q1.push_back(i);
    //     cout << a[q1.front()] << endl;
    // }
    

    return 0;
}
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

int isSphenic(long long n) {
    if (n < 2) return 0; // Số nhỏ hơn 2 không thể là số Sphenic

    int cnt = 0; // Đếm số lượng thừa số nguyên tố khác nhau

    // Kiểm tra ước số 2
    if (n % 2 == 0) {
        cnt++;
        n /= 2;
        if (n % 2 == 0) return 0; // 2 xuất hiện nhiều hơn một lần
    }

    // Kiểm tra các ước số lẻ từ 3 trở đi
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            cnt++;
            n /= i;
            if (n % i == 0) return 0; // i xuất hiện nhiều hơn một lần 
        }
    }

    // Kiểm tra nếu n còn lại là số nguyên tố lớn hon 1
    if (n > 1) cnt++;

    // Số Sphenic phải có đúng 3 thừa số nguyên tố khác nhau
    return cnt == 3;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here

    ll n; cin >> n;
    if (isSphenic(n)) cout << 1;
    else cout << 0; 

    return 0;
}
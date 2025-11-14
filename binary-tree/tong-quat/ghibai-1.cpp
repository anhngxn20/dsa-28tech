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

struct node
{
    int val;
    node *left;
    node *right;
    //constructor
    node(int x) {
        val = x;
        left = right = NULL;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    node *x = new node(1);
    node *y = new node(2);
    node *z = new node(3);
    x->left = y;
    x->right = z;
    node *t = new node(4);
    node *u = new node(5);
    y->left = t;
    y->right = u;
    

    return 0;
}
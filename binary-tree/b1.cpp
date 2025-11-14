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

void makeRoot(node *root, int u, int v, char c) {
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c) {
    if(root == NULL) return;
    if(root->val == u) {
        makeRoot(root, u, v, c);
    }
    else {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

void inOrder(node *root) {
    if(root != NULL) {
        inOrder(root->left);
        cout << root->val << " ";
        inOrder(root->right);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n; cin >> n;

    node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        char c;
        cin >> u >> v >> c;
        if (root == NULL) {
            root = new node(u);
            makeRoot(root, u, v, c);
        }
        else {
            insertNode(root, u, v, c);
        }
    }
    inOrder(root);

    return 0;
}
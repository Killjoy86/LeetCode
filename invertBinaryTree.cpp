/*
Invert a binary tree. 
     4
   /   \
  2     7
 / \   / \
1   3 6   9
to
     4
   /   \
  7     2
 / \   / \
9   6 3   1
*/

#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if ( !root ) {
            return NULL;
        } else {
            TreeNode* rightNode = invertTree(root->left);
            TreeNode* leftNode = invertTree(root->right);
            root->right = rightNode;
            root->left = leftNode;
        }
        return root;
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    TreeNode *root = sol.invertTree(new TreeNode(9));
    
    return 0;
}

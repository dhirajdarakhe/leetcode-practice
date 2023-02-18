/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void f(TreeNode *n){
        if(n==nullptr)return;
        if(n->left)f(n->left);
        if(n->right)f(n->right);
        swap(n->left, n->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        f(root);
        return root;
    }
};
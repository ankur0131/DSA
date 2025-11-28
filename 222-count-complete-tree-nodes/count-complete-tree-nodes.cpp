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
    void pre(TreeNode* root, int &count){
        if(root==NULL){
            return;
        }
        count++;
        pre(root->left,count);
        pre(root->right,count);
    }
public:
    int countNodes(TreeNode* root) {
        int count=0;
        pre(root,count);
        return count;

    }
};
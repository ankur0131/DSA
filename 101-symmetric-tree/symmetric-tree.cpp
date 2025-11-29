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
    bool ismirror(TreeNode* left,TreeNode* right){
        if(left== NULL && right ==NULL ){
            return 1;
        }
        if(left==NULL || right==NULL){
            return 0;
        }
        return (left->val == right->val)&& ismirror(left->left,right->right)&& ismirror (left->right,right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
       if(root==NULL){
            return 1;
       }
       return ismirror(root->left,root->right);
       
        
        
    }
};
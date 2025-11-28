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
    bool isleaf(TreeNode* root) {
        return root && !root->left && !root->right;
    }
    void sumcount(TreeNode* root, int &sum){
        if(root==NULL){
            return ;
        }
        if(isleaf(root->left)){
            sum+=root->left->val;
        } 
        sumcount(root->left,sum);
         
        sumcount(root->right,sum);
        
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        sumcount(root,sum);
        return sum;
    }
};
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
    bool sumPath(TreeNode* root, int sum, int currSum) {
        if(!root)
            return false;
        
        currSum += root->val;
        
        if(!root->left && !root->right){
            if(currSum == sum){
                return true;
            }
            else{
                return false;
            }
        }
        
        return sumPath(root->left, sum, currSum) || sumPath(root->right, sum, currSum);
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return false;
        return sumPath(root, sum, 0);
    }
};
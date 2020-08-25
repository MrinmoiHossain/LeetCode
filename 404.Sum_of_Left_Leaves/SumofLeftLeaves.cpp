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
    int sumOfLeftLeaves(TreeNode* root) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        if(root == NULL)
            return 0;
        
        stack<TreeNode* > s;
        s.push(root);
        
        int sum = 0;
        while(!s.empty()){
            TreeNode* curr = s.top();
            s.pop();
            
            if(curr->left != NULL){
                s.push(curr->left);
                
                if(curr->left->left == NULL && curr->left->right == NULL){
                    sum += curr->left->val;
                }
            }
            if(curr->right != NULL){
                s.push(curr->right);
            }
        }
        
        return sum;
    }
};
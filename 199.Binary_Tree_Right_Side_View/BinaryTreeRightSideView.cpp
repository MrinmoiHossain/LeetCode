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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        vector<TreeNode*> s;
        
        if(root != NULL)
            s.push_back(root);
        
        while(s.size()){
            ans.push_back(s.back()->val);
            
            vector<TreeNode*> temp;
            for(TreeNode* x : s){
                if(x->left)
                    temp.push_back(x->left);
                if(x->right)
                    temp.push_back(x->right);
            }
            s = temp;
        }
        
        return ans;
    }
};
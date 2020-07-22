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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        
        queue<TreeNode* > q;
        q.push(root);
        int level = 0;
        
        vector<vector<int>> ans;
        
        while(!q.empty()){
            int n = q.size();
            vector<int> v(n);
            
            for(int i = 0; i < n; ++i){
                TreeNode* temp = q.front();
                q.pop();
                
                if(level % 2 == 0){
                    v[i] = temp->val;
                }
                else{
                    v[n - i - 1] = temp->val;
                }
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            
            ans.push_back(v);
            level++;
        }
        
        return ans;
    }
};
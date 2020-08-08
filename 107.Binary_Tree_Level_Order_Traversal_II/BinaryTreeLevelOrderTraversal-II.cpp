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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            vector<int> v;
            
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
            }
            
            ans.push_back(v);
        }
        reverse(begin(ans), end(ans));
        
        return ans;
    }
};
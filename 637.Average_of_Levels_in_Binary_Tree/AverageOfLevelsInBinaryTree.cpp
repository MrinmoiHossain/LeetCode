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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            long sum = 0, count = 0;
            queue<TreeNode*> temp;
            
            while(!q.empty()){
                TreeNode* n = q.front();
                q.pop();
                sum += n->val;
                count++;
                
                if(n->left)
                    temp.push(n->left);
                if(n->right)
                    temp.push(n->right);
            }
            q = temp;
            ans.push_back(1.0 * sum / count);
        }
        
        return ans;
    }
};
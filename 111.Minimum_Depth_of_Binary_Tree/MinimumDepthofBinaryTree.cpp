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
    int minDepth(TreeNode* root) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        if(root == NULL)
            return 0;
        
        queue<TreeNode* > q;
        q.push(root);
        int depth = 1;
        
        while(!q.empty()){
            int n = q.size();
            
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left == NULL && temp->right == NULL)
                    return depth;
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
            }
            depth++;
        }
        
        return depth;
    }
};
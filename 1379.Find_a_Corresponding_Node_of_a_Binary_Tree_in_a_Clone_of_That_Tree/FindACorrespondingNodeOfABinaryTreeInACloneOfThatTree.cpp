/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({original, cloned});
        
        while(!q.empty()){
            auto [a, b] = q.front();
            q.pop();
            
            if(a == target)
                return b;
            
            if(a->left && b->left)
                q.push({a->left, b->left});
            
            if(b->right && b->right)
                q.push({a->right, b->right});
        }
        
        return NULL;
    }
};
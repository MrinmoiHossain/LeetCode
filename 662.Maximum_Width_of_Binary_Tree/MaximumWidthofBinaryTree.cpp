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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr)
            return 0;
        
        int width = 0;
        
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 1});
        while(!q.empty()){
            int count = q.size();
            
            unsigned long long left = q.front().second, right;
            for(int i = 0; i < count; ++i){
                TreeNode* n = q.front().first;
                right = q.front().second;
                q.pop();
                
                if(n->left != nullptr)
                    q.push({n->left, 2 * right});
                if(n->right != nullptr)
                    q.push({n->right, 2 * right + 1});
            }
            
            width = max(width, (int)(right - left) + 1);
        }
        
        return width;
    }
};
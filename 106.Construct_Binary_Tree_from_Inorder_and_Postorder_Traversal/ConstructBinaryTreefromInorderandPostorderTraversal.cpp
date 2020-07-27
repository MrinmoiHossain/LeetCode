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
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int& rootId, int left, int right) {
        if(left > right)
            return NULL;
        
        int privot = left;
        while(postorder[rootId] != inorder[privot])
            privot++;
        
        TreeNode* root = new TreeNode(postorder[rootId]);
        rootId--;
        
        root->right = build(inorder, postorder, rootId, privot + 1, right);
        root->left = build(inorder, postorder, rootId, left, privot - 1);
            
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int rootId = inorder.size() - 1;
        return build(inorder, postorder, rootId, 0, inorder.size() - 1);
    }
};
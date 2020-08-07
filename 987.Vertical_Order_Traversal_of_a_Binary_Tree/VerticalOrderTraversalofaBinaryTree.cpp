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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        
        map<int, vector<int>> m;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            int n = q.size();
            map<int, vector<int>> temp_m;
            
            while(n--){
                pair<TreeNode*, int> p = q.front();
                q.pop();
                
                temp_m[p.second].push_back(p.first->val);
                
                if(p.first->left != NULL)
                    q.push({p.first->left, p.second - 1});
                if(p.first->right != NULL)
                    q.push({p.first->right, p.second + 1});
            }
            
            for(auto x : temp_m){
                vector<int> v = x.second;
                if(v.size() > 1)
                    sort(begin(v), end(v));
                
                for(auto y : v)
                    m[x.first].push_back(y);
            }
        }
        
        for(auto x : m)
            ans.push_back(x.second);
        
        return ans;
    }
};
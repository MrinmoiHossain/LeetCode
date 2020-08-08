/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        
        queue<Node* > q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            vector<int> v;
            
            while(n--){
                Node* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                
                for(Node* a : temp->children)
                    q.push(a);
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};
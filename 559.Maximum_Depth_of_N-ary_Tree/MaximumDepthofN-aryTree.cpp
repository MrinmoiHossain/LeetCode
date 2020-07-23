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
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        
        queue<Node* > q;
        q.push(root);
        int depth = 0;
        
        while(!q.empty()){
            int n = q.size();
            while(n > 0){
                Node* temp = q.front();
                q.pop();
                
                for(int i = 0; i < temp->children.size(); ++i){
                    q.push(temp->children[i]);
                }
                n--;
            }
            
            depth++;
        }
        
        return depth;
    }
};
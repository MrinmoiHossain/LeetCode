class Solution {
public:
    vector<string> buildArray(vector<int>& target, int a) {
        vector<string> ans;
        int i = 0, n = target.size(), curr_val = 1;
        
        while(i < n){
            if(target[i] == curr_val){
                ans.push_back("Push");
                i++;
                curr_val++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
                curr_val++;
            }
        }
        
        return ans;
    }
};
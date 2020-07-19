class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        map<int, int> hash;
        for(auto a : A){
            for(auto b : B){
                hash[a + b]++;
            }
        }
        
        int count = 0;
        for(auto c : C){
            for(auto d : D){
                auto it = hash.find(0 - c - d);
                if(it != hash.end())
                    count += it->second;
            }
        }
        
        return count;
    }
};
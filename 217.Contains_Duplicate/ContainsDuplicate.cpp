class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        set<int> s;
        for(int num : nums)
            s.insert(num);
        
        return (s.size() != nums.size());
    }
};
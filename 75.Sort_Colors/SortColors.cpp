class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v(3, 0);
        for(auto a : nums)
            v[a]++;
        
        int k = 0;
        for(int i = 0; i < 3; ++i){
            if(v[i]){
                for(int j = 0; j < v[i]; ++j)
                    nums[k++] = i;
            }
        }
    }
};
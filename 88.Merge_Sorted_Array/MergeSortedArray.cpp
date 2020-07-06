class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s = nums1.size() - 1;
        m -= 1, n -= 1;
        
        while(m >= 0 && n >= 0){
            if(nums1[m] > nums2[n]){
                nums1[s--] = nums1[m--];
            }
            else{
                nums1[s--] = nums2[n--];
            }
        }
        
        while(m >= 0){
            nums1[s--] = nums1[m--];
        }
        
        while(n >= 0){
            nums1[s--] = nums2[n--];
        }
    }
};
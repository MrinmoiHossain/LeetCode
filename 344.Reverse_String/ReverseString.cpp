class Solution {
public:
    void reverseString(vector<char>& s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int left = 0, right = s.size() - 1;
        while(left < right){
            swap(s[left++], s[right--]);
        }
    }
};
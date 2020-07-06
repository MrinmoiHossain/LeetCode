class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, int> m;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] % 2 == 0){
                if(m.count(arr[i] / 2) || m.count(2 * arr[i]))
                    return true;
                else
                    m[arr[i]] = 1;
            }
            else{
                if(m.count(2 * arr[i]))
                    return true;
                else
                    m[arr[i]] = 1;
            }
        }
        
        return false;
    }
};
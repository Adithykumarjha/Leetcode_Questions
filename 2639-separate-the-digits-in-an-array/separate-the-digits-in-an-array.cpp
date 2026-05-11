class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(auto &num:nums){
            string s=to_string(num);

            for(auto &c:s){
                res.push_back(c-'0');
            }
        }
        return res;
    }
};
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>st;
        for(auto &num:nums){
            if(num !=0){
                st.insert(num);
            }
            
        }

        return st.size();
    }
};
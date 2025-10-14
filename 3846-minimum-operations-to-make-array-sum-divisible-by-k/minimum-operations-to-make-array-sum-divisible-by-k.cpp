class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int result=accumulate(nums.begin(),nums.end(),0);
        return result%k;
        
    }
};
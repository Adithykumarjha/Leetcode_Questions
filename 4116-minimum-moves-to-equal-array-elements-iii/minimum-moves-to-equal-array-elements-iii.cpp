class Solution {
public:
    long long minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxVal = nums[0];
        long long res=0;

        for(auto num:nums){
            maxVal = max(num,maxVal);
        }

        for(auto num:nums){
            res+=maxVal-num;
        }

        return res;
    }
};
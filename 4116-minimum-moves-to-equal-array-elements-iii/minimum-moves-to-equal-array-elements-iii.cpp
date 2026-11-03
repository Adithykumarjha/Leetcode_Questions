class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxVal = nums[0];
        int res=0;

        for(auto num:nums){
            maxVal = max(num,maxVal);
        }

        for(auto num:nums){
            res+=maxVal-num;
        }

        return res;
    }
};
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int tsum=0;

        for(int i=0;i<n;i++){
            int begin=max(0,i-nums[i]);

            for(int j=begin;j<=i;j++){
                tsum+=nums[j];
            }
        }
        return tsum;
        
    }
};
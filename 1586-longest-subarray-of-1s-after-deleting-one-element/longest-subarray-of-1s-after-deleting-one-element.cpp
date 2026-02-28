class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int zeros=0;
        int left=0;
        int res=0;

        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zeros++;
            }
    while(zeros>1){
        if(nums[left]==0) zeros--;
        left++;
    }
    res=max(res,right-left);


        }
        return res;
        
    }
};
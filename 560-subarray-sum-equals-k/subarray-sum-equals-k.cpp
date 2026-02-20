class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;

        for(int i=0;i<=n-1;i++){
            int curr=0;
            for(int j=i;j<=n-1;j++){
                curr+=nums[j];

                if(curr==k){
                    count++;
                    }
                }
            }
        return count;
    }
};
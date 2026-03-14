class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                if((abs(nums[i]-nums[j])==k) &&i<j){
                    count++;
                }
            }
        }
        return count;

        
    }
};
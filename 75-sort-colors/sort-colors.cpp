class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,low=0,high=nums.size()-1;
        while(i<=high){

            if(nums[i]==0){
                swap(nums[low],nums[i]);
                i++;
                low++;
            }

            else if(nums[i]==1){
                i++;
            }
            else{
                swap(nums[high],nums[i]);
                high--;
            }
        }
    }
};
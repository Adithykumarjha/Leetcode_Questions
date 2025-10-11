class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
         double avg= DBL_MAX;
         int i=0,j=n-1;
         while(i<j){
            double av=(nums[i]+nums[j])/2.0;
            avg=min(av,avg);
            i++;
            j--;
         }

         return avg;
        
    }
};

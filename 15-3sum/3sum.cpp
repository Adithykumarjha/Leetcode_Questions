class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        vector<vector<int>>result;

        if(nums.size()<3){
            return result;
        }


        if(nums.size()==3 && nums[0]==0 && nums[1]==0 && nums[2]==0){
            result.push_back({0,0,0});
            return result;
        }

                for(int i=0;i<n-2;i++){
            if((i>0)&&nums[i]==nums[i-1]){
                continue;
            }
            
            if(nums[i]>0){
                break;
            }

            int target=-nums[i];
            int left=i+1;
            int right=n-1;

            while(left<right){
                int sum=nums[left]+nums[right];

                if(sum==target){
                    result.push_back({nums[i],nums[left],nums[right]});
                   
                    left++;
                    right--;

                    while((left<right)&& nums[left]==nums[left-1]){
                        left+=1;
                    }
                    while((left<right)&& nums[right]==nums[right+1]){
                        right-=1;
                    }

                }
                else if(sum<target){
                    left+=1;
                }
                else if(sum>target){
                    right-=1;
                }
                
            }
        }
        return result;
        
        
    }
};
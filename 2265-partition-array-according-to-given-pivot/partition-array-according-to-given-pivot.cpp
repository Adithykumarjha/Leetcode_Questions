class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int>result;
        for(int x:nums){
            if(x<pivot){
                result.push_back(x);
            }
        }

        for(int x:nums){
            if(x==pivot){
                result.push_back(x);
            }
        }

        for(int  x:nums){
            if(x>pivot){
                result.push_back(x);
            }
        }

        return result;

    }
};
// Contains Duplicates Problem

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
            }
            return false;
        }
       
        
    
};

int main(){
	Solution Sol;
	vector<int>nums={5,1,8,6,1,4,7};
	bool result=Sol.containsDuplicate(nums);
	if(result){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;

}

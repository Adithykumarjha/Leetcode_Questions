// Intersection of Two Arrays -II
//Two Pointers Approach

#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
         vector<int>set;
         while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                set.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
         }

         return vector<int>(set.begin(),set.end());
        
    }
};

int main(){
	Solution sol;
	
	vector<int>nums1={1,4,2,5,7,7,8};
	vector<int>nums2={6,3,88,4,1,7,2};
	vector<int>result=sol.intersect(nums1,nums2);
	for(int num:result){
		cout<<num<<" ";
	}
	return 0;
	
}

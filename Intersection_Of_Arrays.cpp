// Intersection of two arrays
// Using Two Pointers Approach

#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0,j=0;
        unordered_set<int>set; // We can even use vector,map...

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                set.insert(nums1[i]);
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



// Drivers code

int main(){
	Solution sol;
	
	vector<int>nums1={1,2,3,3,4,6};
	vector<int>nums2={2,3,3,7,9};
	
	vector<int>ans=sol.intersection(nums1,nums2);
	for(int x:ans){
		cout<<x<<" ";
	}
	return 0;
}


//Time Complexity : O(nlogn + mlogm)

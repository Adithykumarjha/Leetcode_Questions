#include<iostream>
#include<vector>
using namespace std;

bool TwoSum(vector<int>arr,int target){
	
	//initialize two pointers
	//leftpointer to point to the starting index of array
	//right pointer to point the last index of the array
	
	int left= 0,right=arr.size()-1;
	
	while(left<right){
		int sum=arr[left]+arr[right];
		
		if(sum==target){
			return true;
		}
		
		else if(sum<target){       //if sum is less than target then move the left pointer forward.
	                               //to test new value sum
			left++;
		}
		else{                      //If the sum occured is more than the target.
			right--;               //that meanse we need to decrease the value so move the right pointer.
		}
	}
	return false;
}

int main(){
	vector<int>arr={10,30,52,65,80};
	int target=117;
	
	if(TwoSum(arr,target)){
		cout<< "True";
	}
	else{
		cout<< "False";
	}
	return 0;
}

//Move All Zeroes To End 

//One traversal method

#include<iostream>
#include<vector>
using namespace std;

void MoveZeroesToEnd(vector<int>&arr){
	
	int count=0;
	
	for(int i=0;i<arr.size();i++){
		if(arr[i]!=0){                    //If an element is non zero swap it
			swap(arr[i],arr[count]);      // if there is a zero, skip it and after that swap it with non zero element.
			count++;
		}
	}
}

//Driver's code
int main(){
	vector<int>arr={1,0,5,4,0,7,0,2,0,5,8};
	MoveZeroesToEnd(arr);
	for(int i:arr){
		cout<<i<<" ";
	}
	return 0;
}

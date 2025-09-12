// REMOVE OCCURENCES PROBLEM
//USING TWO POINTERS PATTERN

#include<iostream>
#include<vector>
using namespace std;

int Occurences(vector<int>arr,int ele){
	
	//initialize a variable(counter) to store non equal elements.
	int k=0;
	
	for(int i=0;i<arr.size();i++){
		if(arr[i]!=ele){
			arr[k]=arr[i];    //add the non equal elements to Kth position 
			                  //Increment k to update to store other values
			k++;
		}
		
		
		
	}
	return k;
}

int main(){
	vector<int>arr={2,4,5,5,8,5};
	int ele=5;
	cout<<Occurences(arr,ele)<<endl;
	return 0;
}

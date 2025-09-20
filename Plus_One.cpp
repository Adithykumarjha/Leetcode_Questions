// Arrays problem --- PLUS ONE

#include<bits/stdc++.h>
using namespace std;




class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                digits[i]++;
            }
            if(digits[i]==10){
                digits[i]=0;
                if(i!=0){
                    digits[i-1]++;
                }
                else{
                    digits.push_back(0);
                    digits[i]=1;
                }
            }
        }
        return digits;
        
    }
};
int main(){
	Solution sol;
	vector<int>digits={2,4,8,7};
	vector<int> result=sol.plusOne(digits);
	cout<<"Results:";
	for(int d:result){
		cout<<d<<" ";
	}
	
	return 0;
}

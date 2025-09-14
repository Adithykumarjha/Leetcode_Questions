// Checking For Happy Number
// Using Two-Pointers Approach

#include<iostream>
using namespace std;

class solution{
	public:
		
		// Function to find the square of digits
		int getNextSol(int n){
			int total=0;
			while(n>0){
				int r=n%10;
				total+=r*r;
				n/=10;
			}
			return total;
		}
		
		// Function to check whther the number is happy or not
		
		bool isHappy(int n){
			int slow=n;
			int fast=getNextSol(n);
			while(fast !=1 && slow!=fast){
				slow=getNextSol(slow);
				fast=getNextSol(getNextSol(fast));
			}
			return fast==1;
		}
};

int main(){
	solution sol;
	int n1=25;
	cout<<n1<<":"<<(sol.isHappy(n1)?"True":"False")<<endl;
	int n2=19;
	cout<<n2<<":"<<(sol.isHappy(n2)?"True":"False")<<endl;
	
}

// Reverse a String
//Using Two Pointers Approach

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		string ReverseWords(string s){
			
			int n=s.size();
			int start=0;
			for(int end=0;end<=n;end++){
				if(end==n || s[end]==' '){
					reverse(s.begin()+start,s.begin()+end);
					start=end+1;
				}
			}
			return s;
		}
};

int main(){
	Solution sol;
	string s="Hello! I'm Adithy Kumar Jha";
	
	string result=sol.ReverseWords(s);
	cout<<result;
	
}

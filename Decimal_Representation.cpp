#include<bits/stdc++.h>
using namespace std;

class Decimal{
	public:
		vector<int>DecimalRepresentation(int n){
			vector<int>res;
			string s=to_string(n);
			int len=s.size();
			
			long long mul=1;
			
			for(int i=len-1;i>=0;i--){
				int digit=s[i]-'0';
				if(digit!=0){
					res.push_back(digit*mul);
				}
				mul*=10;
			}
			
			reverse(res.begin(),res.end());
			return res;
		}
};

int main(){
	Decimal d;
	int n;
	
	cout<<"Enter a number:"<<" ";
	cin>>n;
	vector<int>result=d.DecimalRepresentation(n);
	cout<<"The decimal representation of "<<n<<" is:";
	for(int val:result){
		cout<<val<<" ";
	}
	
	return 0;
	
}

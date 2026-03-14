class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum=0;
        for(int i=1;i<=n;i++){
            int difference=123-s[i-1];
            sum+=difference*i;
        }
        return sum;
        
    }
};
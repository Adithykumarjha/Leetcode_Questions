class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        
        unordered_map<int,int>freq;
        int maxFreq=0;
        int ans=-1;

        for(auto &num:nums){
            if(num%2 !=0){
                continue;
            }
  
            int cnt= ++freq[num];

            if(cnt>maxFreq || (cnt == maxFreq && num<ans)){
                maxFreq=cnt;
                ans=num;

            }

        }

        return ans;
        
    }
};
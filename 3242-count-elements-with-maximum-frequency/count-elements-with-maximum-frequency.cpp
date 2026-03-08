class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        int maxfreq=0;
        int res=0;

        for(auto x:nums){
            freq[x]++;
        }

        for(auto p:freq){
            maxfreq=max(maxfreq,p.second);
        }

        for(auto k:freq){
            if(k.second==maxfreq){
                res+=k.second;
            }
        }

        return res;
        
        
    }
};
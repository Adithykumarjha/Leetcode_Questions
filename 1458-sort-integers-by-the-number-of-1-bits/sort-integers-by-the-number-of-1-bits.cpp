class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,multiset<int>>bitmap;
        vector<int>sol;

        for(int num:arr){
            int bits=__builtin_popcount(num);
            bitmap[bits].insert(num);
        }
        
        for(auto p:bitmap){
            for(int val:p.second){
                sol.push_back(val);
            }
        }

        return sol;

        
    }
};
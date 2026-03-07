class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        vector<int>res;
        unordered_map<int,int>map;

        for(int i=0;i<n;i++){
            map[bulbs[i]]++;
        }

        for(auto const &[value,count]:map){
            if(count==1 || count%2!=0){
                 res.push_back(value);
            }
        }
        sort(res.begin(),res.end());
        return res;

       
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;

        for(int num:nums){
            count[num]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

        for( auto &e : count ){
            pq.push({e.second, e.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>sol;

        while(!pq.empty()){
            sol.push_back(pq.top().second);
            pq.pop();
        }

        return sol;

    }
};
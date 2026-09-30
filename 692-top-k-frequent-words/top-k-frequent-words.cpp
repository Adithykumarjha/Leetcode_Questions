class Solution {
    struct compare{
        bool operator()(const pair<int,string>&a, const pair<int,string>&b){
            if(a.first != b.first) return a.first<b.first;
            return a.second>b.second;
        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto word:words){
            mp[word]++;
        }

        priority_queue<pair<int,string>,vector<pair<int,string>>,compare>pq;

        for(auto [key,value]:mp){
            pq.push({value,key});
        }

        vector<string>res;
        while(!pq.empty() and k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return res;
    }
};
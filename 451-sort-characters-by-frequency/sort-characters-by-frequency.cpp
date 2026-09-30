class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }

        priority_queue<pair<int,char>>pq;

        for(const auto &[ch,freq]:mp){
            pq.push({freq,ch});
        }
        string res="";
        while(!pq.empty()){
           auto [freq,ch]=pq.top();
           pq.pop();
           res.append(freq,ch);
        }

        return res;

    }
};
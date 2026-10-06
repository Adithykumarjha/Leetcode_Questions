class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;

        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }

        vector<string>res(score.size());
        int cnt=0;

        while(!pq.empty()){
            auto pair=pq.top();
            pq.pop();
            cnt++;

            if(cnt==1){
                res[pair.second] = "Gold Medal";
            }

            else if(cnt==2){
                res[pair.second] = "Silver Medal";
            }

            else if(cnt==3){
                res[pair.second] = "Bronze Medal";
            }
            else{
                res[pair.second]=to_string(cnt);
            }
        }
        return res;
    }
};
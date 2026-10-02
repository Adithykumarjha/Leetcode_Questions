class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int>visited;
        queue<int>toVisit;
        toVisit.push(0);

        while(!toVisit.empty()){
            int curr = toVisit.front();
            toVisit.pop();
            visited.insert(curr);
            for(int k : rooms[curr]){
                if(visited.find(k)==visited.end()){
                    toVisit.push(k);
                }
            }
        }

        return visited.size()==rooms.size();
    }
};
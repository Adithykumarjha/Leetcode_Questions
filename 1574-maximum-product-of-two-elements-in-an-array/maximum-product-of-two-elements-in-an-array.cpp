class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int>pq;
        for(auto &num:nums){
            pq.push(num);
        }

        int max1,max2;

        max1=pq.top();
        pq.pop();
        max2=pq.top();

        return (max1-1)*(max2-1);

        
    }
};
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int prefix_min_sum=0;

        for(auto num :nums){
            sum+=num;
            prefix_min_sum = min(prefix_min_sum,sum);
        }
        return 1-prefix_min_sum;
    }
};
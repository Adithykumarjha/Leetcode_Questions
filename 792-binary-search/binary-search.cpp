class Solution {
public:
    int search(vector<int>& nums, int target) {
         int max=nums.size()-1;
        int min=0;
        int mid;
        while(min<=max){
            mid=min+(max-min)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                max=mid-1;
            }
            else{
                min=mid+1;
            }
        }
        return -1;
        
    }

    int main(){
        unsigned int i;
        int n;
        vector<int>x;
        cin>>i;
        while(x.size()<i && cin>>n){
            x.push_back(n);
        }
        int target;
        cin>>target;
        int show=search(x,target);
        if(show==-1){
            //code
        }
        else{
            cout<<show;
        }
        return 0;


    }
};
        

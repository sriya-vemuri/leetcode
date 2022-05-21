class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ct=1,x;
        int n=nums.size();
        if(n==1){return nums[0];}
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                ct++;
                if(ct>n/2){
                    x=nums[i];
                    break;
                }
            }
            else
                ct=1;
        }
        return x;
    }
};

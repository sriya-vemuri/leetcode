class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=-1,ct=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ct++;
            }
            else ct=0;
            maxi = max(maxi,ct);
        }
        return maxi;
    }
};

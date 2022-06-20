class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=-100;
        if(nums.size()==1)
            s=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i])
                i=i+1;
            else{
                s=nums[i];
                break;}
        }
        if(s==-100)
            s=nums[nums.size()-1];
        return s;
    }
};

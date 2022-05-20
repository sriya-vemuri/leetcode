class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> np;
        bool yn=next_permutation(nums.begin(),nums.end());
        if(yn){
            for(int i=0;i<nums.size();i++)
            cout<<nums[i];
        }
        else{
            for(int i=0;i<nums.size();i++)
            cout<<nums[i];
        }
    }
};

//<algorithm> for next_permutation func

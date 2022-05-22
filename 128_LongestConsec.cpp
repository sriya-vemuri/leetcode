class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        int n=nums.size();
        
        if(n<=1){return n;}
        //if(n==1){return n;}
        int ct=1;
        int x=ct;
        int max=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        cout<<nums[i];
        for(int i=0;i<n-1;i++){
                if(nums[i+1]==nums[i]+1||nums[i+1]==nums[i]){
                    if(nums[i+1]==nums[i]){x=ct;}
                    else{
                    ct++;
                    x=ct;
                        if(max<x){max=x;}
                    }
                }
            else ct=1;
        }
        return max;
    }
};

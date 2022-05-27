class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> res{};
        
//        int flag=0;
//         sort(nums.begin(),nums.end());
//          int n=nums.size();
        
//         for(int i=0;i<n-2;i++){
//             if(i==0||(i>0&&nums[i]!=nums[i-1])){
//             int lo=i+1,hi=n-1,sum=-nums[i];
//             while(lo<hi){
                
//                 if(nums[lo]+nums[hi]==sum){
                    
                   
//                     res.push_back({nums[i],nums[lo],nums[hi]});
//                     flag=1;
                    
//                     while(lo&&nums[lo]==nums[lo+1]) lo++;
//                     while(hi&&nums[hi]==nums[hi-1]) hi--;
//                     lo++; hi--;
//                 }
//                 else if(nums[lo]+nums[hi]<sum) lo++;
//                 else hi--;
//             }
//         }while(i < n-1 and nums[i] == nums[i+1]) i++;
//         }
//        // if(n<3||flag==0) return {};
//         return res;
        int n = nums.size();
        if(n < 3) return {};
        
        vector<vector<int> > ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            int start = i+1;
            int end = n-1;
            int tgt = -nums[i];
            while(start < end){
                int sum = nums[start] + nums[end];
                if(sum > tgt) end--;
                else if(sum < tgt) start++;
                else{
                    ans.push_back({nums[i], nums[start], nums[end]});
                    int low = nums[start], high = nums[end];
                    while(start < end and nums[start] == low) start++;
                    while(start < end and nums[end] == high) end--;
                }
            }
            while(i < n-1 and nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};

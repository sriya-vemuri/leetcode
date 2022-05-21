class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res{};
        int ct=1,x;
        int n=nums.size();
        if(n==1){return nums;}
        for(int i=0;i<n-1;i++){
            
            if(nums[i]==nums[i+1]){
                ct++;
                if(ct>n/3){
                    res.push_back(nums[i]);
                }
                //i++;
            }
            else
                ct=1;
        }
        if(res.empty()&&n<=2){return nums;}
        else{
        res.erase(unique(res.begin(), res.end()),res.end());//removes dups
            return res;
    }}
};

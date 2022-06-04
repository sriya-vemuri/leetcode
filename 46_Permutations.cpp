class Solution {
public:
    void solve(int start,int end,vector<int>& nums,vector<vector<int>>& res){
        if(start==end){
            res.push_back(nums);
            return;
        }
        for(int i=start;i<end;i++){
            swap(nums[i],nums[start]);
            solve(start+1,end,nums,res);
            swap(nums[i],nums[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        solve(0,nums.size(),nums,res);
        return res;
    }
};

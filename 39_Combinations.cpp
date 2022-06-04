class Solution {
public:
    vector<int> r;
        vector<vector<int>> res;
    void solve(vector<int>& can,int tar,vector<vector<int>>& res,vector<int>& r,int i){
        if(tar==0){
            res.push_back(r);
            return;
        }
        else if(tar<0){
            return;
        }
        else{
            while(i<can.size()&&tar-can[i]>=0){
                r.push_back(can[i]);
                solve(can,tar-can[i],res,r,i);
                i++;
                r.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        
        solve(candidates,target,res,r,0);
        return res;
    }
};

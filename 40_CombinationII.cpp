class Solution {
    private:
    vector<int> can;
public:
    vector<vector<int>> res;
    vector<int> r;
    void solve(vector<int> s,int target,int start){
        if(accumulate(s.begin(),s.end(),0)>target)
            return;
        for(int i=start;i<can.size();i++){
            if(i>start && can[i]==can[i-1]){
                continue;
            }
            else{
                s.push_back(can[i]);
                if(accumulate(s.begin(),s.end(),0)==target) res.push_back(s);
                solve(s,target,i+1);
                s.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        can=candidates;
        vector<int> s;
        solve(s,target,0);
        return res;
    }
};

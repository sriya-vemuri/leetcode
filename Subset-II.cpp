class Solution {
    private:
    vector<int> n;
    vector<vector<int>> sub;
public:
    void solve(int start,vector<int>s){
        for(int i=start;i<n.size();i++){
            if(i>start && n[i]==n[i-1]){
                continue;
            }
            else{
                s.push_back(n[i]);
                sub.push_back(s);
                solve(i+1,s);
                s.pop_back();
            }
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n=nums;
        sort(n.begin(),n.end());
        sub.push_back({});
        solve(0,{});
        return sub;
    }
};

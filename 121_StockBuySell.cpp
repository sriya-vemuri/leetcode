class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=INT_MAX;
        int pro=0;
        for(int i=0;i<prices.size();i++){
            cp=min(cp,prices[i]);
            pro=max(pro,prices[i]-cp);
        }
        return pro;
    }

};

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pt{};
        pt.push_back({1}); //1st level
        vector<int> v1 ={1};
        vector<int> v2;
        for(int i=0;i<numRows-1;i++){
            v2 = {1};
            //pt[i].resize(i + 1);
            for(int j=0;j<v1.size()-1;j++){
                v2.push_back(v1[j]+v1[j+1]);
            }
            v2.push_back(1);
            pt.push_back(v2);
            v1=v2;
        }
        return pt;
    }
    
};

class Solution {
public:
    vector<string> res;
    stack<char> st;
    void gen(int n,string ans,int open,int close){
        if(open==0&&close==0){
            res.push_back(ans);
        }
        if(open>0&&close>0){
            ans.push_back('(');
            gen(n,ans,open-1,close);
            ans.pop_back();
        }
        if(close>open){
            ans.push_back(')');
            gen(n,ans,open,close-1);
            ans.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        int open=n-1;
        string ans="(";
        int close = n;
        gen(n,ans,open,close);
        return res;
    }
};

class Solution {
public:
    
    bool isValid(string s) {
        vector<char> s1;
        for(auto x:s){
            if(x=='('||x=='['||x=='{')
                s1.push_back(x);
            else if(s1.size()!=0){
                if(x==')'&&s1[s1.size()-1]=='(')
                    s1.pop_back();
                else if(x==']'&&s1[s1.size()-1]=='[')
                    s1.pop_back();
                else if(x=='}'&&s1[s1.size()-1]=='{')
                    s1.pop_back();
                else 
                    return false;
            }
            else
                return false;
        }
        if(s1.size()!=0){
            return false;
        }
         return true;
    }
};

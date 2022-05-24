class Solution {
public:
    string removeOuterParentheses(string s) {
        int i,c=0,o=0,k=0;
        string res;
        string As;
        for(i=0;i<s.length();i++){
            if(s.at(i)=='('){
                o++;
            }
            if(s.at(i)==')'){
                c++;
            }
            if(c==o){
                string A;
                for(int j=k+1;j<i;j++){
                    
                    A.push_back(s.at(j));
                }
                 res.append(A);
                A="";
                k=i+1;
                o=0;
                c=0;
            }
        }
        
        return res;
    }
};

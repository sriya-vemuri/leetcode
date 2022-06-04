class Solution {
public:
    bool isPalin(string s)
    {
        if(s.size()==1) return true;
        else if(s.size()==2) return s[0]==s[1];
        else
        {
            int l=0,h=s.size()-1;
            while(l<=h)
            {
                if(s[l]!=s[h])
                    return false;
                l++;h--;
            }
        }
        return true;
    }
    vector<vector<string>>res;
    void get(string s,vector<string>& v)
    {
        for(int i=0;i<s.size();i++){
            string w=s.substr(0,i+1);
            if(i<=s.size()-1&&isPalin(w))
            {
            v.push_back(w);
            if(i==s.size()-1)
            {
                res.push_back(v);
            }
            get(s.substr(i+1,s.size()-i-1),v);
            v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
     vector<string>v;
     get(s,v);   
        return res;
    }

};

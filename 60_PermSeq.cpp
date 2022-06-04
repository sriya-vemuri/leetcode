class Solution {
public:
    //we have to use next_permutation function!!!!!
    string getPermutation(int n, int k) {
        int digit=1,num=0;
        while(digit<=n) num=num*10+digit++;
        string no=to_string(num);
        while(--k) next_permutation(begin(no),end(no));
        return no;
    }
};

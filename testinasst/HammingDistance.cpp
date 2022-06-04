class Solution {
public:
    int solve(bitset<32> x,bitset<32> y){
        int n1,n2,ct=0;
        for(int i=0;i<x.size();i++){
            if(x.test(i)!=y.test(i))
                ct++;
        }
        return ct;
    }
    int hammingDistance(int x, int y) {
        bitset<32> b(x);
        bitset<32> b1(y);
        return solve(b,b1);
    }
};

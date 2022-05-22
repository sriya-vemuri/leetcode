int Solution::solve(vector<int> &A, int B) {
    map<int,int> freq;
    int ct=0;
    int xorr=0;
    for(auto it:A){
        xorr=xorr^it;
        if(xorr==B) ct++;
        if(freq.find(xorr^B)!=freq.end())
        ct+=freq[xorr^B];
        freq[xorr]+=1;
    }
    return ct;
}

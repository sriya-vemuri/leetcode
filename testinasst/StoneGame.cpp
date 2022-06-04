class Solution {
public:
    bool canWinNim(int n) {
        if(n>4 && n%4!=0){
            return true;
        }
        if(n>4 && n%4==0){
            return false;
        }
        if(n<=3){
            return true;
        }
        if(n%3<=3){
            return false;
        }
        return true;
    }
};

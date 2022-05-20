class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        int a[n],c;
        for(int i=0;i<n;i++)
            a[i]=0;
        for(int i=0;i<=n;i++){
            a[nums[i]-1]++;
            if(a[nums[i]-1]==2){
                c=nums[i];
                break;
            }
        }
        return c;
    }
};

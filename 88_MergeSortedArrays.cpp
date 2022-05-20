class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> res;
//         int i,j=0;
//         for(i=0;i<m+n,j<n;i++){
//             if(n==0){
//                 break;
//             }
//                if(nums1[i]>nums2[j]||nums1[i]==0){
//                    if(m+n>1)
//                    for(int k=i;k<m+n;k++){
//                        int t=nums1[k];
//                        //if(k+1!=m+n)
//                        nums1[++k]=t;
//                    }
//                    nums1[i]=nums2[j];
//                    j++;
//                }
            
//         }
        int i=m-1,j=n-1,k=m+n-1;
        //start from emd and make changes.
        while(j>=0){
            if((i>=0)&&nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        
    }
};

class Solution {
public:
    vector<int> v3;
    void merge(vector<int>& nums1, vector<int>& nums2){
        int i=0,j=0,k=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                v3.push_back(nums1[i]);
                i++;
            }
            else{
                v3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            v3.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            v3.push_back(nums2[j]);
            j++;
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        merge(nums1,nums2);
        double m;
        int n=v3.size();
        if((n)%2==1){
            int l=(n)/2;
            m= v3[l];
        }
        else
        {   int k=(n)/2;
            
            m=(double)((v3[k]+v3[k-1])/(double)2);
        }
        return m;
    }
    
};

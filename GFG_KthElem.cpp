class Solution{
    public:
    void merge(int nums1[], int nums2[], int n, int m,int arr3[]){
        int i=0,j=0,k=0;
        while(i<n&&j<m){
            if(nums1[i]<=nums2[j]){
                arr3[k]=nums1[i];
                k++;
                i++;
            }
            else{
                arr3[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<n){
            arr3[k]=nums1[i];
                k++;
            i++;
        }
        while(j<m){
            arr3[k]=nums2[j];
                k++;
            j++;
        }
    }
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int arr3[n+m];
        merge(arr1,arr2,n,m,arr3);
        return arr3[k-1];
    }
};

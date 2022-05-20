long long maxSubarraySum(int arr[], int n){
int max_sum=INT_MIN,local_max=0;
        for(int i=0;i<n;i++){
            local_max=max(arr[i],arr[i]+local_max);
            if(local_max>max_sum){
                max_sum=local_max;
            }
        }
return max_sum;
}

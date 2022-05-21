  long long int res=0;
    void merge(long long arr[],long long low,long long mid,long long high){
    //   long long count=0;
        long long n1=mid-low+1,n2=high-mid;
        long long left[n1],right[n2];
        for(int i=0;i<n1;i++){
            left[i]=arr[low+i];
        }
         for(int i=0;i<n1;i++){
            right[i]=arr[mid+i+1];
        }
        long long  i=0,j=0,k=low;
        while(i<n1&&j<n2){
            if(left[i]<=right[j]){
                arr[k]=left[i];
                k++;
                i++;
            }
            else{
             
                res+=n1-i;
                arr[k]=right[j];
                k++;
                j++;
            }
        }
        while(i<n1){
            arr[k]=left[i];
            i++;
            k++;
        }
         while(j<n2){
            arr[k]=right[j];
            j++;
            k++;
        }
       
    }
   void mergesort(long long arr[],long long low,long long  high){
        
        if(low<high){
            long long mid=(high+low)/2;
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);
            merge(arr,low,mid,high);
            // return res;
        }
        // return 0;
    }
    long long int  inversionCount(long long arr[], long long N)
    {
        
        // 42
// 468 335 1 170 225 479 359 463 465 206 146 282 328 462 492 496 443 328 437 392 105 403 154
// 293 383 422 217 219 396 448 227 272 39 370 413 168 300 36 395 204 312 323
        res=0;
       
        mergesort(arr,0,N-1);
        //  for(int i=0;i<N;i++){
        //     cout<<arr[i]<<" ";
        // }
      
        return res;
    }

int *findTwoElement(int *arr, int n) {
        int a[n];
        static int r[2]={0,0};
        for(int i=0;i<n;i++)
        a[i]=0;
        for(int i=0;i<n;i++){
            a[arr[i]-1]++;
            }
        
        for(int i=0;i<n;i++){
            if(a[i]==0)
            r[1]=i+1;
            if(a[i]==2)
            r[0]=i+1;
        }
       //cout<<r[0]<<" "<<r[1];
       return r;
    }

int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n);
        sort(dep,dep+n);
        //sort(v.begin(),v.end());
    	int i=1,j=0,ct=1,ans=INT_MIN;
    	while(i<n&&j<n){
    	    if(arr[i]<=dep[j]){
    	        i++;
    	        ct++;
    	    }
    	    else{
    	        j++;
    	        ct--;
    	    }
    	    ans=max(ct,ans);
    	}
    	return ans;
    }

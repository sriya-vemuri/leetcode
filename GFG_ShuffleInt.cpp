void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    vector<int> sh;
	    int i=0,j=n/2;
	    while(j<n){
	        sh.push_back(arr[i++]);
	        sh.push_back(arr[j++]);
	    }
	    for(i=0;i<n;i++){
	        arr[i]=sh[i];
	    }
	   
	}

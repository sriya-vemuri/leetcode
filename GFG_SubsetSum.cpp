vector<int> ans;
    void subsum(vector<int>&arr,int N,int i=0,int sum=0){
        
        if(i>=N){//i val changed
            ans.push_back(sum);
            return;
        }        
        subsum(arr,N,i+1,sum+arr[i]);
        subsum(arr,N,i+1,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        subsum(arr,N);
        return ans;

    }

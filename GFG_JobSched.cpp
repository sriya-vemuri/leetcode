bool static comparison(Job a,Job b){
            return (a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        
        // your code here
        sort(arr,arr+n,comparison);
        int maxi=arr[0].dead;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i].dead);
        }
        int slot[maxi+1];
        for(int i=0;i<=maxi;i++){
            slot[i]=-1;
        }
        int ct=0,jp=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    ct++;
                    jp+=arr[i].profit;
                    break;
                }
            }
        }
        vector<int> res;
        res.push_back(ct);
        res.push_back(jp);
        return res;
    } 

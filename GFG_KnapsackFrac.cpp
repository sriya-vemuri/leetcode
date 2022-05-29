bool static comp(Item a,Item b){
        double r1 = (double)a.value/(double)a.weight;
        double r2 = (double)b.value/(double)b.weight;
        return r1>r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        double finVal=0,currW=0;
        for(int i=0;i<n;i++){
            if(currW+arr[i].weight<=W){
                currW+=arr[i].weight;
                finVal+=arr[i].value;
            }
            else{
                double remain = W-currW;
                finVal+= (double) arr[i].value/(double) arr[i].weight * (double) remain;
                break;
            }
        }
        return finVal;
    }

vector<int> res;
    void js(int n){
        if(n==1){
            // res.push_back(1);
            return;
        }
        else{
            if(n%2==0){
                res.push_back(floor(pow(n,0.5)));
                js(floor(pow(n,0.5)));
            }
            else{
                res.push_back(floor(pow(n,1.5)));
                js(floor(pow(n,1.5)));
            }
        }
    }
    vector<int> jugglerSequence(int N){
        // code here
        res.push_back(N);
        js(N);
        return res;
            
    }

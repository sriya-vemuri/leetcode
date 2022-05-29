public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> meet;
        for(int i=0;i<n;i++){
            meet.push_back({end[i],start[i]});
        }
        sort(meet.begin(),meet.end());
        int count=0,e=-1;
        for(int i=0;i<n;i++){
            if(e<meet[i].second){ //checks if end time<start time
                e=meet[i].first;
                count++;
            }
        }
        return count;
    }

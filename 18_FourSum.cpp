vector<vector<int>> ans;
        
    
        sort(nums.begin(),nums.end());
            
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int target2 = target - nums[i] - nums[j];
                int front = j+1;
                int back = nums.size()-1;
                
                while(front<back)
                {
                    int twoSum = nums[front] + nums[back];
                    
                    if(twoSum < target2) front++;
                    else if(twoSum > target2) back--;
                    else
                    {
                        vector<int> quad = {nums[i],nums[j],nums[front],nums[back]};
                        ans.push_back(quad);
                        
                        while(front < back && nums[front]==quad[2]) front++;
                        while(front < back && nums[back]==quad[3]) back--;
                    }
                }
                while(j+1<nums.size() && nums[j] == nums[j+1]) j++;
            }
            while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        }
        return ans;

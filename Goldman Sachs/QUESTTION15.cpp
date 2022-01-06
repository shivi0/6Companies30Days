//Array Pair Sum Divisibility Problem

 bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int,int> m;
        
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]%k]++;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%k==0)
            {
                if(m[nums[i]%k] % 2 != 0)
                {
                    return false;
                }
            }
            else
            {
                if((nums[i]%k)*2==k)
                {
                    if(m[nums[i]%k] % 2 != 0)
                    {
                        return false;
                    }
                }
                else
                {
                    int modu = nums[i]%k;
                    
                    if(m[modu]!=m[k-modu])
                    {
                        return false;
                    }
                }
            }
        }
        
        return true;
        
    }


// Time Complexity : O(n)
// Space Complexity : O(n)
//Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int start=0;
        int end=0;
        int sum = 0;
        int n = nums.size();
        int len = n+1;
        
        while(end<n)
        {
            while(sum<target && end<n)
            {
                sum += nums[end];
                end++;
            }
            
            while(sum>=target && start<n)
            {
                len = min(len, end-start);
                sum -= nums[start];
                start++;
            }
            
        }
        
        if(len==n+1)
        {
            return 0;
        }
        else
        {
            return len;
        }
    }
};

//Time Complexity : O(n)
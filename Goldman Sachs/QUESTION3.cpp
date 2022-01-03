//Count the subarrays having product less than k

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int start=0, end=0;
        long long cnt = 0;
        long long prod = a[0];
        
        while(start<n && end<n)
        {
            if(prod<k)
            {
                end++;
                
                cnt += end-start;
                
                prod = prod*a[end];
            }
            else
            {
                prod = prod/a[start];
                start++;
            }
        }
        
        return cnt;
    }
};
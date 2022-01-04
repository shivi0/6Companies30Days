//Total Decoding Messages

int CountWays(string str){
		    // DP Based solution

		    long long int M = 1000000007;
		    
		    long long n = str.length();
		    
		    long long dp[n+1];
		    dp[0] = 1;
		    dp[1] = 1;
		    
		    if(str[0]=='0')
		    {
		        return 0;
		    }
		    
		    for(long long i=2; i<=n; i++)
		    {
		        dp[i] = 0;
		        
		        if(str[i-1] > '0')
		        {
		            dp[i] = dp[i-1];
		        }
		        
		        if(str[i-2]=='1' ||(str[i-2]=='2' && str[i-1]<'7'))
		        {
		            dp[i] += dp[i-2];
		        }
		        
		        dp[i] = dp[i]%M;
		    }
		    
		    return dp[n]%M;
		}


// Time Complexity : O(n)
// Space Complexity : O(n)

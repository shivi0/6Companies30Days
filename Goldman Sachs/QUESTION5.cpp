//Program to find Nth Ugly Number.

class Solution{
public:	
	//Dp based solution:
	
	ull getNthUglyNo(int n) {
	    // code here
	    ull ugly[n];
	    ull i2=0, i3=0, i5=0;
	    ull next_m_2 = 2;
	    ull next_m_3 = 3;
	    ull next_m_5 = 5;
	    ull next_ugly = 1;
	    
	    ugly[0] = 1;
	    
	    for(int i=1; i<n; i++)
	    {
	      next_ugly = min(next_m_2, min(next_m_3, next_m_5));
	      
	      ugly[i] = next_ugly;
	      
	      if(next_ugly==next_m_2)
	      {
	          i2 += 1;
	          next_m_2 = ugly[i2]*2;
	      }
	      
	      if(next_ugly==next_m_3)
	      {
	          i3 += 1;
	          next_m_3 = ugly[i3]*3;
	      }
	      
	      if(next_ugly==next_m_5)
	      {
	          i5 += 1;
	          next_m_5 = ugly[i5]*5;
	      }
	    }
	    
	    return next_ugly;
	}
};
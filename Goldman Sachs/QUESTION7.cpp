//Find the kid which gets tha damaged toy

//M items are to be delivered in a circle of size N. Find the position where the M-th item will be delivered if we start from a given position K. Note that items are distributed at adjacent positions starting from K.

#include<bits/stdc++.h>
using namespsace std;

int lastitem(int m, int n, int k)
{
    if(m<=n-k+1)
    {
        return k+m-1;
    }

    m -= n-k+1;

    if(m%n == 0)
    {
        return n;
    }
    else{
        m%n;
    }
}

int main(){
    int m = 8;
    int n = 5;
    int k = 2;

    int res = lastitem(m, n ,k);

    return res;
}

// Ans is 4.
// Time Complexity : O(1)
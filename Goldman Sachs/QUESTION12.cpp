//Find total number of Squares in a N*N cheesboard.

//For a grid of size n*n the total number of squares formed are: n(n+1)(2n+1)/6

//To stop overflow, two conditions have been used:
// 1) long lon int has been used to return
// 2) n * (n + 1) / 2 is evaluated first as the value n*(n+1) will always be a multiple of 2.

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        
        return (N*(N+1)/2)*(2*N+1)/3;
    }
};

//Time Complexity: O(1)
//Auxiliary Space: O(1)
//Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

 int *findTwoElement(int *arr, int n) {
        
        int *res = new int[2];
        
        for(int i=0; i<n; i++)
        {
            if(arr[abs(arr[i])-1]>0)
            {
                arr[abs(arr[i])-1] = -1*arr[abs(arr[i])-1];
            }
            else
            {
                res[0] = abs(arr[i]);
            }
        }
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0)
            {
                res[1] = i+1;
            }
        }
        
        return res;
    }


// Time Complexity : O(n)
// Sapce Complexity : O(1)
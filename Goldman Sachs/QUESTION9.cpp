//Number following a pattern
//Given a pattern containing only I's and D's. I for increasing and D for decreasing.
//Devise an algorithm to print the minimum number following that pattern.
//Digits from 1-9 and digits can't repeat.

string printMinNumberForPattern(string S){
        
        string res;
        
        stack<int> s;
        
        for(int i=0; i<=S.length(); i++)
        {
            s.push(i+1);
            
            if(i==S.length() || S[i]=='I')
            {
                while(s.empty()==false)
                {
                    res += to_string(s.top());
                    s.pop();
                }
            }
        }
        
        return res;
    }


// Time Complexity : O(n)
// Space Complexity : O(n)
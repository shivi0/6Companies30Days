//Decode the string

class Solution{
public:
    string decodedString(string s){
        
        stack<char> st;
        string res;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else
            {
                string temp;
                
                while(!st.empty() && st.top()!='[')
                {
                    temp = st.top()+temp;
                    st.pop();
                }
                
                st.pop();
                
                string num;
                
               while (!st.empty() && isdigit(st.top())) 
               {
                  num = st.top() + num;
                  st.pop();
               }
               
               int number = stoi(num);
               
               string repeat;
                
                while(number>0)
                {
                    repeat += temp;
                    number--;
                }
                
                for (char c : repeat)
                st.push(c);
            }
        }
        
        while (!st.empty())
        {
           res = st.top() + res;
           st.pop();
        }
        
        return res;
    }
};
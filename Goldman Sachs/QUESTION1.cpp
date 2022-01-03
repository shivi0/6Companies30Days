// Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
    
        int N = string_list.size();
        
        bool visited[N+1];
        fill(visited, visited+N, false);
        vector<vector<string>> res;
        
        for(int i=0; i<string_list.size(); i++)
        {
            if(visited[i]!=true)
            {
                vector<string> ans;
                
                string s = string_list[i];
                ans.push_back(s);
                
                int cnt[256] = {0};
                
                for(int j=0; j<s.length(); j++)
                {
                    cnt[s[j]]++;
                }
                
                for(int k=i+1; k<string_list.size(); k++)
                {
                    if(visited[k]==false)
                    {
                        string str = string_list[k];
                        int cnt1[256] = {0};
                        
                        for(int l=0; l<str.length(); l++)
                        {
                            cnt1[str[l]]++;
                        }
                        
                        int m;
                        
                        for(m=0; m<256; m++)
                        {
                            if(cnt[m]!=cnt1[m])
                            {
                                break;
                            }
                        }
                        
                        if(m==256)
                        {
                            ans.push_back(str);
                            visited[k] = true;
                        }
                    }
                }
                
                visited[i] = true;
                
                res.push_back(ans);
            }
        }
        
        return res;
    }
};

// There is one more solution using unordered_map which is much simpler than this.
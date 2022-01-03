//Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.

string encode(string src)
{     
  string res;
  int cnt = 1;
  int i;
  
  for(i=0; i<src.length()-1; i++)
  {
      if(src[i]==src[i+1])
      {
          cnt++;
      }
      else
      {
          res += src[i];
          res += to_string(cnt);
          cnt = 1;
      }
  }
  
  res += src[i];
  res += to_string(cnt);
  
  return res;
  
}
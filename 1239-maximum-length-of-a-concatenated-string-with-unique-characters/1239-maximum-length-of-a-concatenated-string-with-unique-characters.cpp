class Solution {
public:
    int maxLength(vector<string>& arr) {
        int ans=0;
      for(int i=1;i<=(1<<arr.size());i++)
      {
          string s;
          int valid=1;
          for(int j=0;j<arr.size();j++)
              if((i>>j)&1)
                  s+=arr[j];
          vector<int>fre(26);
          for(int j=0;j<s.size();j++ ){ 
              fre[s[j]-'a']++;
              if(fre[s[j]-'a']>1)
                  valid=0;
          }
          if(valid)
              ans=max(ans,(int)s.size());
      }
        return ans;
    }
};
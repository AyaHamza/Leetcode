class Solution {
public:
    int ans=0;
    bool Check(string s){
        vector<int>fre(26);
         for(int j=0;j<s.size();j++ ){ 
              fre[s[j]-'a']++;
              if(fre[s[j]-'a']>1)
                  return 0;
          }
        return 1;
    }
    void GetAns(int in,string s,vector<string>& arr){
        if(in==arr.size()){
            if(Check(s))
                ans=max(ans,(int)s.size());
            return;
        }
        GetAns(in+1,s+arr[in],arr);
        GetAns(in+1,s,arr);       
    }
    int maxLength(vector<string>& arr) {
     GetAns(0,"",arr);
        return ans;
    }
};
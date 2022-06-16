class Solution {
public:
    int dp[1005][1005];
string str;
int  Is_Palindrome(int i, int j) {
     if(i>j)return 1;
    if (dp[i][j] != -1)return dp[i][j];
    if (Is_Palindrome(i +1, j-1) )dp[i][j]=1;
    else dp[i][j] = 0;
    if(str[i]!=str[j])dp[i][j]=0;

    return dp[i][j];
}
    string longestPalindrome(string s) {
       int mx = 0, st = 0, e = 0, y;
    str=s;
    memset(dp,-1,sizeof dp);
    string ans;
    for (int i = 0; i < s.size(); i++)
        for (int j = i; j < s.size(); j++) {
             dp[i][j]!=-1?y=dp[i][j]:y=Is_Palindrome(i, j);
              if(y&&(j-i+1)>mx)mx=j-i+1,st=i,e=j;
        }
    for (int i = st; i <= e; i++)
       ans += s[i];
   return ans;
    }
};
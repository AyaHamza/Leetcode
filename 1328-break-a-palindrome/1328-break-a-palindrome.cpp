class Solution {
public:
    string breakPalindrome(string palindrome) {
      int c=0;
        for(int i=0;i<palindrome.size()/2;i++)
            if(palindrome[i]!='a'){
                palindrome[i]='a',c=1;
                break;
            }
        if(!c)
            for(int i=palindrome.size()-1;i>0;i--)
                if(palindrome[i]=='a'){
                    palindrome[i]='b',c++;
                    break;
                }
        return c?palindrome:"";
    }
};
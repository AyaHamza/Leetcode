class Solution {
public:
    int get_vowels(string s,int st,int end){
        int c=0;
        for(int i=st;i<end;i++){
            char ch = tolower(s[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                c++;
        }
            
        return c;
    }
    bool halvesAreAlike(string s) {
        if(get_vowels(s,0,s.size()/2) != get_vowels(s,s.size()/2,s.size()))
           return false;
           return true;
    
    }
};
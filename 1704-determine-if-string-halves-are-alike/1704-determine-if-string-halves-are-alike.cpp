class Solution {
public:
    int countVowels(string s,int st,int end){
        int vowelCount = 0;
        for (int i = st; i < end; ++i) {
            char ch = tolower(s[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                ++vowelCount;
            }
        }
        return vowelCount;
    }

    bool halvesAreAlike( std::string& s)  {
        int mid = s.size() / 2;
        int firstHalfVowels = countVowels(s, 0, mid);
        int secondHalfVowels = countVowels(s, mid, s.size());

        return (firstHalfVowels == secondHalfVowels);
    }
};
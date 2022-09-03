class Solution {
public:
    vector<int> ans;
    void GetAns(int n, string s, int k) {
        if (n == 0) {
            ans.push_back(stoi(s)), cout << s << endl;
            return;
        }
        if(s.size()==0)
        for (int i = 1; i <= 9; i++) {
                GetAns(n - 1, s + (char) (i + '0'), k);
        }
        else 
        {
            char ch1=s.back()-k,ch2=s.back()+k;
            if(ch1>='0'&&ch1<='9')GetAns(n-1,s+ch1,k);
            if(ch2!=ch1&&ch2>='0'&&ch2<='9')GetAns(n-1,s+ch2,k);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        GetAns(n,"",k);
        return ans;
    }
};
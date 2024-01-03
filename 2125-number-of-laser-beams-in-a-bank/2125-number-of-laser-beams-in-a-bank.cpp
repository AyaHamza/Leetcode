class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        long long last=0,ans=0;
        for(int i=0;i<bank.size();i++){
            int c=0;
            for(int j=0;j<bank[i].size();j++)
                c+=(bank[i][j]=='1');
            ans+=(c*last);
            if(c)last=c;
        }
        return ans;
    }
};
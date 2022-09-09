class Solution {
public:
     static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
       sort(properties.begin(),properties.end(),comp) ;
        int mx=properties[0][1],ans=0;
        for(int i=0;i<properties.size();i++){
            if(mx>properties[i][1])
                ans++;
            mx=max(mx,properties[i][1]);

        }
        return ans;
    }
};
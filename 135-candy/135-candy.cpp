class Solution {
public:
    Solution(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    }
    int ans[20005];
    int candy(vector<int>& ratings) {
        int sum=0,sz=ratings.size(),x=1;
        for(int i=0;i<sz;i++)ans[i]=1;
        for(int i=1;i<sz;i++)
          if(ratings[i]>ratings[i-1]&&ans[i]<=ans[i-1])
              ans[i]=ans[i-1]+1;
        for(int i=sz-2;i>=0;i--)
            if(ratings[i]>ratings[i+1]&&ans[i]<=ans[i+1])
                ans[i]=ans[i+1]+1;
        for(int i=0;i<sz;i++)
            sum+=ans[i];
        return sum;
    }
};
class Solution {
public:
    long long  mod=1e9+7;
   int  maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int szH=horizontalCuts.size(),szV=verticalCuts.size();
        int  mxW=max(horizontalCuts[0],h-horizontalCuts[szH-1]),mxV=max(verticalCuts[0],w-verticalCuts[szV-1]);
        for(int i=1;i<horizontalCuts.size();i++)
            mxW=max(mxW,horizontalCuts[i]-horizontalCuts[i-1]);
        for(int i=1;i<szV;i++)
          mxV=max(mxV,verticalCuts[i]-verticalCuts[i-1]);
        return ((mxV%mod)*(mxW%mod))%mod;               
    }
};
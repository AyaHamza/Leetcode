class Solution {
public:
    int trap(vector<int>& height) {
       vector<int>h(height.size());
        int mx=0,x,ans=0;
        for(int i=height.size()-1;i>=0;i--){
         h[i]=mx;
         mx=max(mx,height[i]);
        }
        mx=0;
        for(int i=0;i<height.size();i++){
            x=min(mx,h[i]);
            if(x>height[i])
                ans+=x-height[i];
            mx=max(mx,height[i]);

        }
        return ans;
    }

};
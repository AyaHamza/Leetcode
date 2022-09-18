class Solution {
public:
    int trap(vector<int>& height) {
       vector<int>h(height.size());
        int mx=0,ans=0;
        for(int i=height.size()-1;i>=0;i--){
         h[i]=mx;
         mx=max(mx,height[i]);
        }
        mx=0;
        for(int i=0;i<height.size();i++){
            if(min(mx,h[i])>height[i])
                ans+=min(mx,h[i])-height[i];
            mx=max(mx,height[i]);
        }
        return ans;
    }

};
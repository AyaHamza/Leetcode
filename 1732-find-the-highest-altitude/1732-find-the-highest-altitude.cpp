class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=0,sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            mx=max(mx,sum);
        }
        return mx;
    }
};
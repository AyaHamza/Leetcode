class Solution {
public:
    double average(vector<int>& salary) {
        int mx=INT_MIN,mn=INT_MAX,sum=0;
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
            mn=min(mn,salary[i]);
            mx=max(salary[i],mx);
        }
        sum-=(mn+mx);
        return (double)sum/(salary.size()-2);
        
        
    }
};
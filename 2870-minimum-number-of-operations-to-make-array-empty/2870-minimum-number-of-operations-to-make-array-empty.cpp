class Solution {
public:
    map<int,int>freq;
    int minOperations(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        for(auto it :freq){
            if(it.second==0)
                continue;
            else if(it.second==1) return -1;
            if(it.second%3==0) ans+=(it.second/3);
            else if(it.second%3==1) ans+=2+((it.second-4)/3);
            else if(it.second%3==2) ans+=1+((it.second-2)/3);
        }
        return ans;
        
    }
};
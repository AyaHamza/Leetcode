class Solution {
public:
    int freq[1000005];
    int minOperations(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        for(int i=1;i<=1000000;i++){
            if(freq[i]==0)
                continue;
            else if(freq[i]==1) return -1;
            if(freq[i]%3==0) ans+=(freq[i]/3);
            else if(freq[i]%3==1) ans+=2+((freq[i]-4)/3);
            else if(freq[i]%3==2) ans+=1+((freq[i]-2)/3);
        }
        return ans;
        
    }
};
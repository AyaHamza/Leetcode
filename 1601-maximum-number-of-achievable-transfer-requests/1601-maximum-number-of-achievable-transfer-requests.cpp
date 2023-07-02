class Solution {
public:
    int arr[25];
    int get_ans(int ind,int num_of_requests,int c0,vector<vector<int>>& requests,int n){
        if (ind==requests.size())
            return c0==n ? num_of_requests:0;
        int x=0;
        if(requests[ind][0]!=requests[ind][1]){
        arr[requests[ind][0]]--,arr[requests[ind][1]]++;
        if(arr[requests[ind][0]]==0) x++;
        if(arr[requests[ind][1]]==1)x--;
        }
        int mx=get_ans(ind+1,num_of_requests+1,c0+x,requests,n);
        if(requests[ind][0]!=requests[ind][1])
        arr[requests[ind][0]]++,arr[requests[ind][1]]--;
        mx=max(mx,get_ans(ind+1,num_of_requests,c0,requests,n));
        return mx;  
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        return get_ans(0,0,n,requests,n);
    }
};
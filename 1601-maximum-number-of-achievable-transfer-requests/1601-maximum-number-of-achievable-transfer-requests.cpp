class Solution {
public:
    int arr[25];
    
    int get_ans(int ind,int num_of_requests,vector<vector<int>>& requests,int n){
        if (ind==requests.size()){
            for(int i=0;i<n;i++)
                if(arr[i]!=0) return 0;
            return num_of_requests;
        }
        
        arr[requests[ind][0]]--,arr[requests[ind][1]]++;
        int mx=get_ans(ind+1,num_of_requests+1,requests,n);
        
        arr[requests[ind][0]]++,arr[requests[ind][1]]--;
        mx=max(mx,get_ans(ind+1,num_of_requests,requests,n));
        
        return mx;  
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        return get_ans(0,0,requests,n);
    }
};
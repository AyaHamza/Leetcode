class TimeMap {
public:
    TimeMap() {
        
    }
    map<pair<string,int>,string>mp;
    map<string,vector<int>>mp2;
    void set(string key, string value, int timestamp) {
        mp[{key,timestamp}]=value;
        mp2[key].push_back(timestamp);
    }
    
    string get(string key, int timestamp) {
        return BS(key,timestamp);
    }
    string BS(string key,int val){
    
        int s=0,e=mp2[key].size()-1,mid,ans=-1;
       
        while(s<=e){
            mid=(s+e)/2;
            if(mp2[key][mid]==val){
                ans=val;
                break;
            } 
            else if(mp2[key][mid]>val)
                e=mid-1;
            else{
                ans=max(ans,mp2[key][mid]);
                s=mid+1;
            } 
        }
        return ans==-1?"":mp[{key,ans}];
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
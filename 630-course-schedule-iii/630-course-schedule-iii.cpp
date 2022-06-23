class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<courses.size();i++)
            swap(courses[i][0],courses[i][1]);
        sort(courses.begin(),courses.end());
            int ans=0,cur=0;
        for(int i=0;i<courses.size();i++){
            if(courses[i][1]+cur<=courses[i][0])
                pq.push({courses[i][1],courses[i][0]}),cur+=courses[i][1],ans++;
            else if(pq.size()&&pq.top().first>courses[i][1])
                cur-=(pq.top().first-courses[i][1]),pq.pop(),pq.push({courses[i][1],courses[i][0]});
                    

        }
        return ans;
        
    }
};
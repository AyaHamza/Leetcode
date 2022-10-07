class MyCalendarThree {
public:
vector<pair<int,int>>events;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        events.push_back({start,1});
        events.push_back({end,0});
        sort(events.begin(),events.end());
        int c=0,mx=0;
        for(int i=0;i<events.size();i++){
            events[i].second?c++:c--;
            mx=max(mx,c);
        }
        return mx;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
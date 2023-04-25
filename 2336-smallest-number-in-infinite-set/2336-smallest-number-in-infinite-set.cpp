class SmallestInfiniteSet {
public:
    int nums[1005];
    priority_queue<int>pq;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++)
            pq.push(i*-1);
    }
    
    int popSmallest() {
        int x=pq.top()*-1;
        pq.pop();
        nums[x]=0;
        return x;
    }
    
    void addBack(int num) {
        if(!nums[num])
            nums[num]=1,pq.push(num*-1);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
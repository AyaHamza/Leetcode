class Solution {
public:
    string predictPartyVictory(string senate) {
       queue<int>D,R;
        int d,r;
        for (int i = 0; i < senate.size(); i++)
            senate[i] == 'D' ? D.push(i) : R.push(i);
        while (D.size()&&R.size()){
            d=D.front(),r=R.front();
            R.pop(),D.pop();
            d<r? D.push(d+senate.size()): R.push(r+senate.size());
        }
        return R.size()? "Radiant":"Dire";
    }
        
};

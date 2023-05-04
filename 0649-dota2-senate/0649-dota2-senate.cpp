class Solution {
public:
    string predictPartyVictory(string senate) {
       queue<int>D,R;
        int d,r,n=senate.size();
        for (int i = 0; i < senate.size(); i++)
            senate[i] == 'D' ? D.push(i) : R.push(i);

        while (D.size()&&R.size()){
            d=D.front(),r=R.front();
            R.pop(),D.pop();
            if(d<r)
                D.push(d+n);
            else 
                R.push(r+n);
        }
        return R.size()? "Radiant":"Dire";
    }
        
};

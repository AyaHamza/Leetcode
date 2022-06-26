
#include<vector>
using namespace std;
class Solution {
public:
    int maxScore(vector<int> &cardPoints, int k) {
        int i = 0, j = cardPoints.size()-1, sum = 0,ans=0;
        for ( ; i < k; i++)
            sum += cardPoints[i];
        ans = max(ans, sum),i--;
        while (i >= 0 && j >= cardPoints.size() - k) 
            sum -= cardPoints[i], sum += cardPoints[j], i--, j--,ans = max(ans, sum);
        return ans;
    }
};
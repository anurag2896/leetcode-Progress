class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0, currmax=0;
        for(auto i=1; i<prices.size(); i++) {
            currmax=max(0, currmax+=prices[i]-prices[i-1]);
            ans=max(currmax, ans);
        }
        
        return ans;
    }
};

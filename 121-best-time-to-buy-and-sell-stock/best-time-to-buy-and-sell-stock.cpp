class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sub=prices[0];
        int profit=0;
       for(int i=1;i<prices.size();i++){
            sub=min(sub,prices[i]);
            profit=max(profit,prices[i]-sub);

       }
        return profit;
    }
};
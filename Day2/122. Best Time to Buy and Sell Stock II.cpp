class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof = 0;
        for(int i = 0; i < prices.size()-1;++i){
            if(prices[i] < prices[1+i]){
                prof = prof + (prices[1+i]-prices[i]);
            }
        }
        return prof;
    }
};
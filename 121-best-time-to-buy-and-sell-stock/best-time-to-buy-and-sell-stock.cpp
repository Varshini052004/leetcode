class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprices = INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            int price=prices[i];
            minprices=min(minprices,price);
            maxProfit=max(maxProfit, price-minprices);
        }
        return maxProfit;

        }
    
};
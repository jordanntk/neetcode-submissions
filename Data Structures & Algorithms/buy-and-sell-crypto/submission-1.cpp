class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = 100;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < lowestPrice) {
                lowestPrice = price;
                continue;
            }
            else if (price - lowestPrice > maxProfit) {
                maxProfit = price - lowestPrice;
            }
        }
        return maxProfit;
    }
};

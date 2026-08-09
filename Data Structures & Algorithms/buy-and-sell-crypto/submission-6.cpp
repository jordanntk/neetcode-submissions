class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int lowestDay = prices[0];

        for (int day : prices) {
            maxP = std::max(maxP, day - lowestDay);
            lowestDay = std::min(day, lowestDay);
        }
        return maxP;
    }
};

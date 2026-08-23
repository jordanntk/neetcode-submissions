class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currentLowest = prices[0];
        int maxP = 0;

        for (int day : prices) {
            if (day < currentLowest) {
                currentLowest = day;
            }
            maxP = max(maxP, day - currentLowest);
        }

        return maxP;
    }
};

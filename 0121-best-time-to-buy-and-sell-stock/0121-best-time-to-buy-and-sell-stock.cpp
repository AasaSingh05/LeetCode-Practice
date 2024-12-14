class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0; // Handle empty input

        int minPrice = INT_MAX; // Initialize to a very large value
        int maxProfit =
            0; // Initialize to zero since no transaction means no profit

        for (int price : prices) {
            // Update the minimum price encountered so far
            minPrice = std::min(minPrice, price);

            // Calculate potential profit if sold today
            int potentialProfit = price - minPrice;

            // Update maximum profit
            maxProfit = std::max(maxProfit, potentialProfit);
        }

        return maxProfit;
    }
};
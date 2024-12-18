class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> finar;
        int val = 0;

        for(int j = 0; j < prices.size(); j++){
            val = prices[j];
            for(int i = j+1; i < prices.size(); i++){
                if(prices[i] <= prices[j]){
                    val = (prices[j] - prices[i]);
                    break;
                }
            }
            finar.push_back(val);
        }

        //time complexity = O(n^2)
        return finar;
    }
};
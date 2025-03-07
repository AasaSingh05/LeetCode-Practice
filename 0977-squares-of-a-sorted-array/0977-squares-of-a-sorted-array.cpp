class Solution {
public:
    static bool compare(const int& a, const int& b){
        return  a < b;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = nums[i]*nums[i];
        }

        sort(nums.begin(), nums.end(), compare);

        return nums;
    }
};
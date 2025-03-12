class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negativecount = 0;
        int positivecount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                negativecount++;
            }
            if(nums[i] > 0){
                positivecount++;
            }
        }
        return max(negativecount,positivecount);
    }
};
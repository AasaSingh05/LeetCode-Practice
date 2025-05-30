class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        while (l <= r){
            int m = static_cast<int>( (l+r)/2 );
            if(nums[m] < target){
                l = m+1;
            }

            else if(nums[m] > target){
                r = m-1;
            }
    
            else{
                return m;
            }
        }
        return -1;
    }
};
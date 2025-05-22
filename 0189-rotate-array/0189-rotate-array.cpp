//TIME COMPLEXITY:O(N)
//SPACE COMPLEXITY:O(N)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //declaration and initialization
        int n = nums.size();
        vector<int> newarr(n,0);

        //manipulation and copying the array
        for(int i  = 0; i < n; i++){
            int index = (i+k) % n;

            //copying the array into the new array
            newarr[index] = nums[i];
        }

        //setting this as the new array
        nums = newarr;
    }
};
//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(1)

//USING THE TWO POINTER SOLUTION
class Solution {
public:
    int trap(vector<int>& height) {
        //declarations and initializations
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxleft = 0;
        int maxright = 0;
        int totaltrappedrain = 0;

        //looping over the height array using two pointers
        while(left <= right){
            //when the left side is smaller or equal, we handle it
            if(height[left] <= height[right]){
                //if current height is greater than the left max, update it
                if(height[left] >= maxleft){
                    maxleft = height[left];
                } else {
                    //otherwise calculate trapped rain
                    totaltrappedrain += maxleft - height[left];
                }
                //move the left pointer forward
                left++;
            } else {
                //when right side is smaller
                if(height[right] >= maxright){
                    maxright = height[right];
                } else {
                    //otherwise calculate trapped rain
                    totaltrappedrain += maxright - height[right];
                }
                //move the right pointer backward
                right--;
            }
        }

        //returning the final value
        return totaltrappedrain;
    }
};

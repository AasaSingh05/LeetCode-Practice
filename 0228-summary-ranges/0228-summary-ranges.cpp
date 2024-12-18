#include <string>

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        if (nums.empty()) return v;

        int low = 0;

    
    for (int i = 1; i <= nums.size(); ++i) {
            // Check if the current number breaks the range or if it's the last element
            if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
                if (low == i - 1) {
                    // Single number range
                    v.push_back(to_string(nums[low]));
                } else {
                    // Range of numbers
                    v.push_back(to_string(nums[low]) + "->" + to_string(nums[i - 1]));
                }
                low = i; // Update the start of the next range
            }
        }
        return v;
    }
};
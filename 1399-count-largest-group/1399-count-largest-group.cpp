//using a hashmap approach
class Solution {
public:
    int countLargestGroup(int n) {
        
        //creating the hash map
        unordered_map<int, int> hashMap;
        
        //making the max val var
        int maxValue = 0;

        //iterating through the numbers
        for (int i = 1; i <= n; ++i) {
            
            //calculating the sum of the digits
            int key = 0, i0 = i;
            while (i0) {
                key += i0 % 10;
                i0 /= 10;
            }
            
            //incrementing the hash with the key val
            ++hashMap[key];

            //check if the current size is equal or larger than the existing size 
            maxValue = max(maxValue, hashMap[key]);
        }

        //to calculate the count of max size arrays
        int count = 0;

        //iterating through te array
        for (auto& [KeyVal, value] : hashMap) {
            if (value == maxValue) {
                ++count;
            }
        }

        //returning the final val
        return count;
    }
};
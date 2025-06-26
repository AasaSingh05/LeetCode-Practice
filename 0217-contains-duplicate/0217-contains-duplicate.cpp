//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(N)
#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //declaration and initalizations
        unordered_map<int,int> map;

        //looping over the elements
        for(int elt : nums){

            //we take the current elt and increment it
            map[elt]++;

            //if there is already and youre adding to it then return true
            if(map[elt] > 1){
                return true;
            }
        }

        //else return false
        return false;
    }
};
//TIME COMPLEXITY: O(N)
//SAPCE COMPLEXITY: O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //declaration (nums val , index)
        unordered_map<int, int> hashMap;
        
        //iterating over the nums vector
        for(int i = 0; i < nums.size(); i++){
            //calculating the compliment and adding that as the value of the dict
            int comp = target - nums[i];

            //if that complement is already added
            if(hashMap.find(comp) != hashMap.end()){
                return {hashMap[comp] , i};
            }

            //if not add it there
            hashMap[nums[i]] = i;
        }

        //for unsuccessful find
        return {};
    }
};
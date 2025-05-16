class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //declaration and intialization 
        int l = 0;
        int r = numbers.size()-1;

        //looping over the list with the two pointers
        while(true){

            //calculating the inital sum
            int sum = numbers[l] + numbers[r];
            
            //checking if the sum is lower or equal or greater to the target
            if(sum < target){
                l++;
            }

            else if(sum > target){
                r--;
            }

            //for the found case we can break as well
            else if(sum == target){
                break;
            }
        }
        return {l+1,r+1};
    }
};
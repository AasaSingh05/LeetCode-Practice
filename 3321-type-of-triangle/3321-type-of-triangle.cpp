//TIME COMPLEXITY: O()
//SPACE COMPLEXITY: O()

class Solution {
public:
    string triangleType(vector<int>& nums) {
        //declaration and intialization
        bool isValidTriangle = false; 
        string type = "none";

        //sides sum calc
        bool sidea = nums[0]+nums[1] > nums[2];
        bool sideb = nums[0]+nums[2] > nums[1];
        bool sidec = nums[1]+nums[2] > nums[0];


        //to if its a valid triangle before the type
        if(sidea && sideb && sidec){
            isValidTriangle = true;
        }

        //to check the type of the triangle
        if(isValidTriangle){
            if((nums[0] == nums[1]) && (nums[1] == nums[2])){
                type = "equilateral";
            }
            
            else if(
                (nums[0] != nums[1]) && 
                (nums[1] != nums[2]) && 
                (nums[0] != nums[2])){

                    type = "scalene";
            }

            else{
                type = "isosceles";
            }
        }

        return type;
    }
};
//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(N)

//USING THE PURELY DP SOLUTION
class Solution {
public:
    int trap(vector<int>& height) {
        //declarations and initializations
        int n = height.size();
        vector<int> maxleft(n);
        vector<int> maxright(n);
        vector<int> minbound(n);
        int totaltrappedrain = 0;

        //initializing the two main dp arrays to the needed values
        maxleft[0] = 0;
        maxright[n-1] = 0;

        //looping over the heights to find the max heights needed
        for(int i = 1; i < n; i++){
            //to find the max left height availible
            maxleft[i] = max(maxleft[i-1],height[i-1]);

            //to find the max right height availible 
            maxright[n-i-1] = max(maxright[n-i],height[n-i]);
        }

        //setting up the bound array
        for(int i = 0; i < n; i++){
            //finding the min value across all the bounds
            minbound[i] = min(maxleft[i], maxright[i]);
        }

        //now that the setup is done we then do the actual calculation and looping
        for(int i = 0; i < n; i++){
            //calculating the needed trapped rain water
            int trapped = minbound[i] - height[i];

            //only if it is a +ve value it will be added to the total
            if(trapped > 0){
                //adding it to the final value
                totaltrappedrain += trapped;
            }
        }

        //returning the final value
        return totaltrappedrain;
    }
};
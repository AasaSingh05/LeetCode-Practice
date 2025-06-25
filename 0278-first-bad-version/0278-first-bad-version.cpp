//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(1)

/*  The API isBadVersion is defined for you.
    bool isBadVersion(int version);*/
class Solution {
public:
    int firstBadVersion(int n) {
        //base case
        if(n == 1) return 1;

        //declaration and initialization
        int left = 1;
        int right = n;
        int middle;

        //starting the while loop
        while(left < right){
            //calculating the value of the middle
            middle = left + (right - left) / 2;

            //if it a good version
            if(!isBadVersion(middle)){
                left = middle + 1;
            }   

            //if it is a bad version
            else {
                right = middle;
            }
        }

        //we found the first bad version and return it
        return left;
    }
};
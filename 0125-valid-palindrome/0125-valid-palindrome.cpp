#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        //Creating the two pointers 
        int l = 0;
        int r = (s.size()) - 1;

        //The while loop to go through the string
        while(l < r){

            //checks if is alnum or not
            if( isalnum(s[l]) == 0 ){
                l++;
                continue;
            }

            if( isalnum(s[r]) == 0 ){
                r--;
                continue;
            }

            //actual checking to ensure it is equal
            if( (tolower(s[l])) != (tolower(s[r])) ){
                return false;
            }

            //increment the l and r vars
            l++;
            r--;
        }

        return true;
    }
};
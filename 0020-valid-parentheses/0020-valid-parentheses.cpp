//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(N)
#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        // Map of closing to opening brackets
        unordered_map<char, char> bracketMap = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        //declaration and initialization 
        stack<char> stk;

        //looping over each character in the string
        for (char ch : s) {
            // Checks if the key exists in the hashmap
            if (bracketMap.count(ch)) {

                // Check if stack is empty or top of stack doesn't match
                if (stk.empty() || stk.top() != bracketMap[ch]) {
                    
                    //it isnt valid, hence return
                    return false;
                }
                
                // matched successfully
                stk.pop();
            } 
            
            //otherwise it has to be an opening bracket
            else {

                //push into the stack
                stk.push(ch);
            }
        }

        // If the stack is empty, all brackets matched
        return stk.empty();
    }
};

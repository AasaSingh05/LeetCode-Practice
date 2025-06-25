//TIME COMPLEXITY: O()
//SPACE COMPLEXITY: O()
class Solution {
public:
    // helper function to check if the final array is empty or not  
    bool isEmpty(vector<char> arr){
        if(arr.size() == 0) return true;
        else{
            return false;
        }
    }

    //main function
    bool isValid(string s) {
        //base cases
        if((s.length() == 1) || (s[0] == ')') || (s[0] == ']') || (s[0] == '}')) return false;

        //declaration and initialization
        vector<char> arr;

        //iterating over the string characters
        for(char ch : s){
            
            //if it is an open bracket it gets pushed immediately
            if(ch == '{' || ch == '(' || ch == '['){
                arr.push_back(ch);
            }
            else{       
                //now to check for each closing bracket individually
                if(
                    (arr.size() == 0 && ch == ')' && (arr.back() != '(')) ||
                    (arr.size() == 0 && ch == '}' && (arr.back() != '{')) ||
                    (arr.size() == 0 && ch == ']' && (arr.back() != '['))
                ){
                    //If it doesnt match instantly return false
                    return false;
                }
                //iff it matches then it gets removed
                arr.pop_back();
            }
        }

        //we check for elts and return the final answer
        return isEmpty(arr);
    }
};
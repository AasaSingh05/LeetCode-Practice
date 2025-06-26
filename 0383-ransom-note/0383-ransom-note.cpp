//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(N)
#include <unordered_map>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        //declaration of the map
        unordered_map<char,int> freq;

        //making the map/collection of availible letters
        for(char ch: magazine){
            //adding the freq to the map
            freq[ch]++;
        }

        //now checking for the ransom note
        for(char ch: ransomNote){

            //using one letter for the note
            freq[ch]--;

            //checking if it underflows/runs out
            if(freq[ch] < 0){
                return false;
            }
        }

        //if the code reaches here that means there are no underflows
        return true;
    }
};
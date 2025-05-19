class Solution {
public:
    int romanToInt(string s) {
        //declaration and initalization of the map 
        unordered_map<char,int> map;
        
        map['I'] = 1;
        map['V']= 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D']= 500;
        map['M'] = 1000;
        
        //base case of a single char string
        if(s.length() == 1) return map[s[0]];

        //declaration of the other variables
        int val = 0;
        int chval = 0;
        int nextchval = 0;

        //looping over all the characters until second last character
        for(int i = 0; i < s.length()-1; i++){    
            chval = map[s[i]];
            nextchval = map[s[i+1]];

            //checking if the current val should be added or subbed from the next val
            if(chval >= nextchval){
                val += chval;
            }
            else{
                val -= chval;
            }
        }
        
        //last charcter should be added
        val += nextchval;
    
        //returning the value
        return val;
    }  
};
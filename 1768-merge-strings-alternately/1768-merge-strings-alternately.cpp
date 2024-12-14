class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int cur1 = 0, cur2 = 0;
        while(cur1 < word1.length() && cur2 < word2.length()){
            result += word1[cur1];
            result += word2[cur2];
            cur1++;
            cur2++;
        } 
        while(cur1 < word1.length() ){
            result += word1[cur1];
            cur1++;
        } 
        while(cur2 < word2.length()){
            result += word2[cur2];
            cur2++;
        } 
        return result;
    }

};
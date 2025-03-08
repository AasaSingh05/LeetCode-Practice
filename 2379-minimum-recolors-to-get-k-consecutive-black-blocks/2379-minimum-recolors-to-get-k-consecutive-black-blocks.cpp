class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        //declaration and intitalization
        int CountBlack = 0;
        int ans = INT_MAX;

        //iterating through the indexes
        for(int i = 0; i < blocks.size(); i++){

            //if current letter is B
            if(blocks[i] == 'B') CountBlack++;

            //on moving forward if the last elt was also a B 
            if( (i-k) >= 0 && (blocks[i-k] == 'B') ) CountBlack--;

            //finding the minima
            ans = min(ans, k-CountBlack);
        }

        return ans;
    }
};
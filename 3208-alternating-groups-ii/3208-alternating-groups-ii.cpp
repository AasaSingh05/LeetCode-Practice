class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int count = 1, finans = 0;
        int n = colors.size();

        //as it is circular
        for(int i = 0; i < n+k-2 ; i++){
            //checking if the current and the previous one are alternating or not
            if(colors[i%n] != colors[(i-1+n)%n]){
                count++;
            }else{
                count = 1;
            }
            if(count >= k){
                finans++;
            }
        }

        return finans;
    }
};
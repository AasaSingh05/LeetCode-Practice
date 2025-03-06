class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = ( grid.size() * grid.size() ) + 1;
        vector<int> freq(size, 0);
        int rep = -1;
        int missing = -1;

        for(auto& row : grid){
            for(int num : row) freq[num]++;
        }

        for(int num = 1; num <= size-1; num++){
            if(freq[num] == 2){
                rep = num;
            }
            if(freq[num] == 0){
                missing = num;
            }
        }

        return {rep, missing};
    }
};
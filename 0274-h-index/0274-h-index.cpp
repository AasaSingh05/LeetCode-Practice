class Solution {
public:
    int hIndex(vector<int>& citations) {
        //sorting the entire array
        sort(citations.begin(), citations.end());
        
        //declaration and intitialization 
        int n = citations.size();

        //looping over the array 
        for(int i = 0; i < n; i++){
            //if the value of the current elt is equal to number of entries left    
            if(citations[i] >= n-i){
                return n-i;
            }
        }

        //when any citations cannot be found
        return 0;
    }
};
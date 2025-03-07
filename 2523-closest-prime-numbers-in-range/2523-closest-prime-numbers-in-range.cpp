class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> sieve(right + 1, true);
        sieve[0] = sieve[1] = false;
        
        for (int i = 2; i * i <= right; ++i) {
            if (sieve[i]) {
                for (int j = i * i; j <= right; j += i) {
                    sieve[j] = false;
                }
            }
        }
        
        vector<int> primes;

        //to get all possible primes
        for(int i = left; i <= right; ++i){
            if(sieve[i]){
                primes.push_back(i);
            }
        }

        //base cases
        if(primes.size() <= 1){
            return {-1,-1};
        }

        if(primes.size() == 2){
            return primes;
        }

        //for all other cases
        int mindiff = 999999999;
        int bestind = 0;
        for(int index = 0; index < primes.size()-1; index++){
            int newdiff = primes[index+1] - primes[index];
            if(newdiff < mindiff){
                mindiff = newdiff;
                bestind = index;
            }
        }

        return {primes[bestind], primes[bestind+1]};
    }
};
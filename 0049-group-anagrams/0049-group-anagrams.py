from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagramdict = defaultdict(list)
        for s in strs: #O(n)
            keyVal = [0] * 26 
            for char in s: #O(m)
                keyVal[ord(char) - ord('a')] += 1
            
            idkey = tuple(keyVal)
            anagramdict[idkey].append(s)

        return list(anagramdict.values())
#final complexity O(N * M)

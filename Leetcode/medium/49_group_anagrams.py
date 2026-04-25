from collections import defaultdict
from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        seen = defaultdict(list)
        for s in strs:
            l = ''.join(sorted(s))
            seen[l].append(s)
            
        return list(seen.values())
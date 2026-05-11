class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:

        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1

        m, n = len(nums1), len(nums2)
        total = m + n
        half = (total + 1) // 2 #We add 1 to the half in case it is an even case, so the left has the last element

        #Our Seach space for i is from 0 to m , because if not it would be on the largest anyway
        lo, hi = 0, m
        while lo <= hi:
            i = (lo + hi) // 2 # Total number of elements from m that we put into our left cut
            j = half - i # Total number of elements from n that we put into our left cut

            L1 = nums1[i - 1] if i != 0 else -float('inf')
            R1 = nums1[i] if i != m else float('inf')
            L2 = nums2[j - 1] if j != 0 else -float('inf')
            R2 = nums2[j] if j != n else float('inf')

            if L1 <= R2 and L2 <= R1:
                if total % 2 == 1:
                    return max(L1, L2)
                else:
                    return (max(L1, L2) + min(R1, R2)) / 2
            
            if L2 > R1:
                lo = i + 1
            else:
                hi = i - 1


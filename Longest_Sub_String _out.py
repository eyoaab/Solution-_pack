class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        length=0
        le=0
        di={}
        for ri in range(len(s)):
            char=s[ri]
            if (char in di and le<=di[char]):
                le=di[char]+1
            else:
                length=max(length, ri -le + 1)
            di[char]=ri
        return length
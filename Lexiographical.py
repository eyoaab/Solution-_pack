class Solution:
    def largestMerge(self, word1: str, word2: str) -> str:
        f=0
        s=0
        merged=''
        while(f<len(word1) and s<len(word2)):
            if(word1[f]>word2[s]):
                merged+=word1[f]
                f+=1
            elif(word1[f]<word2[s]):
                merged+=word2[s]
                s+=1
            else:
                remain1=word1[f:]
                remain2=word2[s:]
                if(remain1>remain2):
                    merged+=word1[f]
                    f+=1
                else:
                    merged+=word2[s]
                    s+=1
        if(f<len(word1)):
            merged+=word1[f:]
        if(s<len(word2)):
            merged+=word2[s:] 
        return merged        





        
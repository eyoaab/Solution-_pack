class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        d=defaultdict(int)
        for i in s1:
            d[i]+=1
        f=defaultdict(int)
        start=0   
        for end in range(len(s2)):
            f[s2[end]]+=1
            if(end-start+1==len(s1)):
                if(f==d):
                    return True
                else:
                    f[s2[start]]-=1
                    if(f[s2[start]]==0):
                        del f[s2[start]] 
                    start+=1        
        return False                  
        
n=int(input())
for i in range(n):
    a=int(input())
    li=[int(x) for x in input().split()]
    l,r,count=0,0,0
    while(r<a):
        if((li[r]/li[l])<0):
            count+=max(li[l:r])
            l=r
            r+=1
        else:
            r+=1      
    count += max(li[l:r])  
    print(count) 
    li.clear() 
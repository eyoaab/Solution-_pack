
c=0
i=0
r=len(nums)-1
while(i<r):
    if i%2==0 and nums[i]==nums[i+1]:
       c+=1
       nums.pop(i)
       r-=1
    else:
        i+=1
if( len(nums)%2==0):
    print(c)
else:
    print(c+1)
        
        

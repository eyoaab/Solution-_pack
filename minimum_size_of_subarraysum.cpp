
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long l=0;
         long long  maX =1000000000000;
          long long sum=0;
        for( int r=0;r<nums.size();r++){
             sum+=nums[r];
             while(sum>=target){
                maX = min(maX, r - l + 1);
                 sum-=nums[l++];
                 
             }

        }      
        return  maX==1000000000000 ? 0 : maX;
    }
};
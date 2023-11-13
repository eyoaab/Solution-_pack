class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1,c=0;
        while(l<r){
            if(nums[l]+nums[r]==k){
                c++;
                r--;
                l++;
            }
            else if(nums[l]+nums[r]>k){
                r--;
            }
            else if(nums[l]+nums[r]<k){
                l++;
            }
        }

      return c;  
    }
};
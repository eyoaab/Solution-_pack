class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r=numbers.size()-1;
        int l=0;
        while(r>l){
            int temp=numbers[l]+numbers[r];
            if(temp==target){
                vector<int>ans={l+1,r+1};
                return ans;
            }
            if(temp>target){
                r--;
            }
            else if(temp<target){
                l++;
            }
        }
         vector<int>ans={l+1,r+1};
                return ans;
    }
};
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int r= skill.size()-1;
        int l=0;
        long long tot=0;
        int sum=skill[l]+ skill[r];
        while(l<r){
            if( skill[l]+ skill[r]!=sum){
                return -1;
            }  
          tot+=skill[l]* skill[r];
            l++;
            r--;
        }
        return tot;

        
    }
};
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       sort(players.begin(),players.end());
       sort(trainers.begin(),trainers.end()); 
       int p=players.size();
       int t=trainers.size();
       int f=0,s=0,ma=0;
       while(f<p && s<t){
           if(players[f]<=trainers[s]){
               ma++;
               f++;
               s++;
                         }
           else{
   s++;
           }
       }
return ma;
    }
};
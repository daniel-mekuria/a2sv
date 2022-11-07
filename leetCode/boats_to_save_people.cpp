class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       sort(people.begin(),people.end());
       int min=0;
       int max=people.size()-1;
       int saved=0;
       while(min<=max){
           if((people[min]+people[max])<=limit){
               saved++;
               min++;
               max--;
           }else{
               max--;
               saved++;
           }
       }
       return saved;
        
                
    }
};

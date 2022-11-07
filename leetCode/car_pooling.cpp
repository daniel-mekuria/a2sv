class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
vector array(1002, 0);

   for (int i = 0; i < trips.size(); i++)
      {
         
       
               array[trips[i][1]]+=trips[i][0];
                array[ trips[i][2]]-=trips[i][0];  
         
      }
     
    
   for (int i = 1; i <array.size(); i++)
      {
    array[i]+=array[i-1];
   }
    
        for(auto element : array)
       {
            
             if(element>capacity )
             {
                  return false;
             }
            
       }
    
     return true;
    


 
    
}
};

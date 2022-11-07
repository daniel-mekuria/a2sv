class Solution {
public:
    int totalFruit(vector<int>& fruits) {
  
    unordered_map<int,int> unordered_mp;
    int result = 0;
    int i=0,j=0, n=fruits.size();
    for(;j<n; j++)
    {
        unordered_mp[fruits[j]]++;
        while(unordered_mp.size()>2)
        {
            unordered_mp[fruits[i]]--;
            if(unordered_mp[fruits[i]]==0)
                unordered_mp.erase(fruits[i]);
            i++;
        }
        result= max(result,j-i+1);
    }
    return result;
}
};

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int length = arr.size();
        
        vector<int>item(length);
        vector<int>result;
        
        item[0] = arr[0];
        
        for(int i = 1; i < length; i++) {
            item[i]= item[i-1]^arr[i];
        }
        for(int i = 0; i < queries.size(); i++) {
            if(queries[i][0] == 0) {
                result.push_back(item[queries[i][1]]);
                
            } else {
                result.push_back(item[queries[i][1]]^item[queries[i][0]-1]);
                
            }
        }
        return result;
    }
};

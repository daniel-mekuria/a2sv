class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int lengt = nums.size();
        vector<int> sums(lengt+1, 0);
        
        for(int i=1; i<=lengt; i++){
            sums[i] = sums[i-1] + nums[i-1];
        }
        
        vector<int> start(lengt+1, 0);
        vector<int> start2(lengt+1, 0);
        vector<int> end(lengt+1, 0);
        vector<int> end2(lengt+1, 0);
        
        for(int i=k; i<=lengt; i++){
            start[i] = max(start[i-1], sums[i]-sums[i-k]);
            
            if(start[i] == start[i-1]){
                start2[i] = start2[i-1];
            }
            else{
                start2[i] = i;
            }
        }
        
        for(int i=lengt-k; i>=0; i--){
            end[i] = max(end[i+1], sums[i+k]-sums[i]);
            
            if(end[i] == sums[i+k]-sums[i]){
                end2[i] = i;
            }
            else{
                end2[i] = end2[i+1];
            }
        }
        
        int maxSum=0, x, y, z;
        
        for(int i=k; i<=lengt-2*k; i++){
            if(maxSum < start[i]+(sums[i+k]-sums[i])+end[i+k]){
                maxSum = start[i]+(sums[i+k]-sums[i])+end[i+k];
                x = start2[i]-k;
                y = i;
                z = end2[i+k];
            }
        }
        
        return {x, y, z};
    }
};

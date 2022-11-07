class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int result=0,sum=0;
        for(int i=0;i<k;i++)              
        {
            sum+=arr[i];
        }
        if(sum/k>=threshold)     
            result++;
        for(int j=1;j<1+(arr.size()-k);j++)     
        {
            sum-=arr[j-1];
            sum+=arr[j+k-1];
            if(sum/k>=threshold)
                result++;
        }
        return result;      
    }
};

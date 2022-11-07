class Solution {
public:
    int firstOccurence(vector<int>& nums, int target){
        int left = 0;
        int answer = -1;
        int right = nums.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(target==nums[mid]){
                answer = mid;
                right = mid-1;
            }
            else if(target<nums[mid])
                right = mid-1;
            else 
                left = mid+1;
        }
        return answer;
    }
    int lastOccurence(vector<int>& nums, int target){
        int left = 0;
        int answer = -1;
        int right = nums.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(target==nums[mid]){
                answer = mid;
                left = mid+1;
            }
            else if(target<nums[mid])
                right = mid-1;
            else 
                left = mid+1;
        }
        return answer;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        int first = firstOccurence(nums, target);
        int last = lastOccurence(nums, target);
        if(first!=-1 && last!=-1){
        for(int i=first; i<=last; i++)
            result.push_back(i);}
        return result;
    }
};

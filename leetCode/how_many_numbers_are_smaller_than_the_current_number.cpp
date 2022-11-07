class Solution {
public:
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int i, j;
        int count[101] = {0, 0, 0};
		int length = nums.size();
        for(i = 0; i < length; i++) {
            count[nums[i]]++;
        }
        for(i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }
        for(i = 0; i < length; i++) {
            if(nums[i] == 0)
                result.push_back(0);
            else
                result.push_back(count[nums[i] - 1]);
                
        }
        return result;
    }};

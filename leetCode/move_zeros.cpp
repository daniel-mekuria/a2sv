class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                v.push_back(nums[i]);
            }
        }
        for(int j=v.size();j<nums.size();j++){
            v.push_back(0);
        }
        nums=v;
    }
};

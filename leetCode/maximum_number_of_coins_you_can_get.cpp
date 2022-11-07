class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int left = 0;
        int right = piles.size()-1;
        int result = 0;
        
        while(left<right)
        {
            result += piles[right-1];
            right -= 2;
            left += 1;
        }
        return result;
    }
};

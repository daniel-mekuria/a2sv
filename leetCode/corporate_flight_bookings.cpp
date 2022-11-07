class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        
        vector<int> result(n);
        for (const auto& x : bookings)
        {
            result[x[0] - 1] += x[2];
            if (x[1] < n)
            {
                result[x[1]] -= x[2];
            }
        }
        
        for (int i = 1; i < n; ++i)
        {
            result[i] += result[i - 1];
        }
        
        return result;
    }
};

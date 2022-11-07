class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int sum = 0;

        for (auto i : cardPoints)
            sum += i;

        int window = 0;
        int n = cardPoints.size();
        int start = 0;
        int end = n - k;

        if (n == k)
            return sum;

        for (int i = 0; i < end; i++)
        {
            window += cardPoints[i];
        }
        int result = sum - window;

        while (end < n)
        {
            window -= cardPoints[start++];
            window += cardPoints[end++];

            result = max(sum - window, result);
        }

        return result;
    }
};

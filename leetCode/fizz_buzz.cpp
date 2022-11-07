class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> result;

        for (int i = 1; i <= n; i++)
        {
            bool divisible_by_3 = i % 3;
            bool divisible_by_5 = i % 5;

            if (!divisible_by_3 && !divisible_by_5)
            {
                result.push_back("FizzBuzz");
            }

            else if (!divisible_by_3)
            {
                result.push_back("Fizz");
            }

            else if (!divisible_by_5)
            {
                result.push_back("Buzz");
            }
            else
            {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};

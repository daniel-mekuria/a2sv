class Solution
{

public:
    vector<int> partitionLabels(string s)
    {
        map<char, int> max_pos;
        vector<int> answer;
        for (int i = 0; i < s.length(); i++)
        {
            max_pos[s[i]] = i;
        };
        int max = -1;
        int last_max=0;
        for (int i = 0; i < s.length(); i++)
        {
            
         
            if (max_pos[s[i]] >= max)
            {
                max = max_pos[s[i]];
            }
               if (max == i)
            {

answer.push_back(max -last_max +1);
last_max=max+1;
max=-1;
            }
        }

    
    return answer;
    }
};

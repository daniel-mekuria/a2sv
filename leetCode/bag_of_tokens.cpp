class Solution
{

public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        sort(tokens.begin(), tokens.end());
        int score = 0, min = 0, max = tokens.size() - 1;
        while (min <= max&& (power >= tokens[min] || (score>0&&max>min))){
            
            if (power >= tokens[min]){
                power-=tokens[min];
                min++;
                score++;
            }
            else if(score>0) {
                power+=tokens[max];
                max--;
                score --;

            }

        }
        return score;
    }
};

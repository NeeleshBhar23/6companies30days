class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0;
        for(char c:s)
        {
           if(c == '1') totalOnes++;
        }

        int maxScore = 0;
        int leftZeroes = 0;
        int rightOnes = totalOnes;

        for(int i = 0; i<s.size()-1; i++)
        {
            if(s[i] == '0')
            {
                leftZeroes++;
            }
            else if(s[i] == '1')
            {
                rightOnes--;
            }

            int currentScore = leftZeroes + rightOnes;
        maxScore = max(maxScore, currentScore);
        }

        

        return maxScore;
    }
    
};
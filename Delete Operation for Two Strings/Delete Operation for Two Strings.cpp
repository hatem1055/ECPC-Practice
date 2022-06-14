class Solution {
public:
    int minDistance(string word1, string word2)
    {
        /*
            say word1 is "sea" , Word2 is "eat"
            here is how the dp will look like

                       S  E  A
                    0  1  2  3
                E   1  2  1  .
                A   2  .  .  .
                T   3  .  .  .

            @ i = 1 ,j = 1    (S & E) are not equal so +1 deletion is supposed to be made + min of (1,1) which gives 2

        @ i =1 , j =2    (E & E) are equal so no more deletion is required , We take the min number of deletion is made whice is 1 @(i-1)(j-1)

        And so on...


        */
        vector<vector<int>> DP(word1.length() + 1, vector<int>(word2.length() + 1));
        for (int i = 0; i <= word1.length(); i++)
        {
            for (int j = 0; j <= word2.length(); j++)
            {
                if (i == 0 || j == 0)
                    DP[i][j] = i + j;

                // As we added Additional row and column
                // Thats why we use i-1 & j -1 
                else if (word1[i - 1] == word2[j - 1])
                {
                    // When Two chars are equal therefor no deletion requires -> so we take the value of the last number of deletion that we have made
                    DP[i][j] = DP[i - 1][j - 1];
                }
                else
                {
                    // When they are not equal -> one more deletion is required (+1) in the code
                    // As we need the Min no. of deletion we take the Min between upper value and left value . ie we take the min possible deletion befor that character
                    DP[i][j] = 1 + min(DP[i - 1][j], DP[i][j - 1]);
                }

                //keeping this for each character, then at the last index of DP we will found the answer as its cumulative

            }
        }
        return DP[word1.length()][word2.length()];
    }



};
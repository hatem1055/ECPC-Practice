class Solution {

public:
    int countHousePlacements(int n) {
        long a = 1;
        long b = 1;
        int mod = 1e9 + 7;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = (a + b) % mod;

            a = b;
            b = sum;

        }
        return  (b * b) % mod;


    }
};
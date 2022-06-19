class Solution {
public:
    int minimumNumbers(int num, int k)
    {
        int count = 0;
        if (num == 0)
        {
            return 0;
        }
        if (num % 2 != 0 and k % 2 == 0) {       // if num is odd and k is even no solution
            return -1;
        }
        if (k == 0) {                      // for k=0 
            if (num % 10 == 0) {// if sum is number divisable by 10 therefor we need only 1 number which is num and put  at units 0
                return 1;
            }
            else {
                return -1;
            }
        }
        while (num - k > 0 and num % 10 != k) {// sum = 58 k =3 do 58-= 3
                                    // 55 --> 52 --> 49 --> 46 --> 43
            // answer will be 43 + (3*counter)
                                    // until we reach unit = k  , if num%10 ==k therfor we reached a nuber its unit digits is equal to k .
            num -= k;
            count++;
        }
        if (num % 10 != k) {
            return -1;
        }

        return count + 1;
    }
};
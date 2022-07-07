class Solution {
public:
    long long waysToBuyPensPencils(int total, int pen, int pencil)
    {
        // Total / pen || Total / pencil , it gives the max number of pen or pencil you can buy with money = Total.
        long long ways = 0;
        for (int i = 0; i <= total / pen; i++)
        {
            int remaining_money = total - (pen * i);
            ways += (remaining_money / pencil) + 1; // +1  if you decided to buy 0 pencil . Its a way
        }
        return ways;
    }
};
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n < 2)
            return n;
        int p = 1, q = 1, c;
        for (int i = 2; i <= n; i++)
        {
            c = p + q;
            q = p;
            p = c;
        }
        return c;
    }
};
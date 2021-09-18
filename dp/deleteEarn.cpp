#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        int n = 10001;
        vector<int> values(n, 0);
        for (int num : nums)
            values[num] += num;

        int take = 0, skip = 0;
        for (int i = 0; i < n; i++)
        {
            int takei = skip + values[i];
            int skipi = max(skip, take);
            take = takei;
            skip = skipi;
        }
        return max(take, skip);
    }
};
int main()
{
    int n, a;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
            cin >> a;
            nums[i] = a;
    }
    Solution s;
    cout << s.deleteAndEarn(nums) << "\n";

    return 0;
}
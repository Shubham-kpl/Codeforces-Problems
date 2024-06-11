class Solution
{
public:
    int findLength(vector<int> &a, vector<int> &b)
    {
        int n = a.size(), m = b.size();

        vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));
        vector<int> dp(m + 1, 0);
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = m; j >= 1; j--)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[j] = 1 + dp[j - 1];
                    ans = max(ans, dp[j]);
                }
                else
                    dp[j] = 0;
            }
        }

        return ans;
    }
};
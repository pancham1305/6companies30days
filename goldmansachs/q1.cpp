class Solution
{
public:
    int maxPoints(vector<vector<int>> &points)
    {
        map<double, int> mp;
        int ans = INT_MIN;
        int n = points.size();
        if (n < 3)
        {
            return n;
        }
        for (int i = 0; i < points.size(); i++)
        {
            // Points[i]

            for (int j = 0; j < points.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                double m = 0.0;
                double y1 = points[i][1];
                double y2 = points[j][1];
                double x2 = points[j][0];
                double x1 = points[i][0];
                if (x2 - x1 == 0)
                {
                    m = INT_MAX;
                }

                else
                    m = (y2 - y1) / (x2 - x1);
                mp[m]++;

                ans = max(ans, mp[m]);
            }
            mp.clear();
        }
        return ans + 1;
    }
};
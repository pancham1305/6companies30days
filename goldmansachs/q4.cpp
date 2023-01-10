class Solution
{
public:
    int distance(vector<int> p2, vector<int> p1)
    {
        int y2 = p2[1];
        int y1 = p1[1];
        int x2 = p2[0];
        int x1 = p1[0];
        int dis = pow(y2 - y1, 2) + pow(x2 - x1, 2);
        return dis;
    }
    int numberOfBoomerangs(vector<vector<int>> &points)
    {
        map<int, int> m;
        int n = points.size();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                m[distance(points[i], points[j])]++;
            }
            for (auto k : m)
            {
                cnt += k.second * (k.second - 1);
            }
            m.clear();
        }
        return cnt;
    }
};

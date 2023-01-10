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
    bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
    {
        int a = distance(p2, p1);
        int b = distance(p3, p2);
        int c = distance(p4, p3);
        int d = distance(p4, p2);
        int e = distance(p4, p1);
        int f = distance(p3, p1);
        map<int, int> m;
        m[a]++;
        m[b]++;
        m[c]++;
        m[d]++;
        m[e]++;
        m[f]++;
        int size = m.size();
        if (size == 2 && m[0] == 0)
        {
            return true;
        }
        return false;
    }
};
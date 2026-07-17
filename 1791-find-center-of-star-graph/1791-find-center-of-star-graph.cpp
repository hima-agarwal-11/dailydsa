
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> degree;

        for (auto &e : edges) {
            degree[e[0]]++;
            degree[e[1]]++;
        }

        for (auto &p : degree) {
            if (p.second == edges.size())
                return p.first;
        }

        return -1;
    }
};
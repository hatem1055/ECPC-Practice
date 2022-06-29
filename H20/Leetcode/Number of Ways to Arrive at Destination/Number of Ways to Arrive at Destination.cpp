class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {

        vector<pair<long long int, long long int>> adj[201];
        for (int i = 0; i < roads.size(); i++)
        {
            int u = roads[i][0];
            int v = roads[i][1];
            int w = roads[i][2];

            adj[u].push_back({ v, w });
            adj[v].push_back({ u, w });
        }

        priority_queue<pair<long long, long long>> pq;
        pq.push({ 0, 0 });
        vector<long long> distance(n, LLONG_MAX);
        vector<long long> paths(n, 0);
        vector<long long> visited(n, 0);

        distance[0] = 0; //because we are starting from 0
        paths[0] = 1;

        while (!pq.empty())
        {
            pair<long long, long long> p = pq.top(); pq.pop();
            long long dist = -p.first;
            int u = p.second;
            if (visited[u]) continue;
            visited[u] = 1;

            for (int i = 0; i < adj[u].size(); i++)
            {
                int v = adj[u][i].first;
                long long w = adj[u][i].second;

                if (dist + w < distance[v])
                {
                    distance[v] = dist + w;
                    pq.push({ -(dist + w), v });
                    paths[v] = paths[u];
                }

                else if (dist + w == distance[v])
                {
                    paths[v] = (paths[v] + paths[u]) % 1000000007;
                    pq.push({ -(dist + w), v });
                }
            }
        }

        return (int)paths[n - 1];
    }
};
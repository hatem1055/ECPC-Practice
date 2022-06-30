#include <cmath>
#include <limits>

#define INF numeric_limits<unsigned long long>::max()
class Solution {
public:
int get_paths(vector<int> *connectors, int connector)
{
    if (connector == 0)
    {
        return 1;
    }
    int s = 0;
    for (int s_c : connectors[connector])
    {
        s += get_paths(connectors, s_c);
    }
    return s;
}
void set_vs(int v1, int v2, int dist, int dest, unsigned long long  *paths, double *ways, bool *visted, vector<int> *connectors, bool *is_connected)
{
    int to_v2 = paths[v1] + dist;
    visted[v2] = true;
    if (paths[v2] >= to_v2)
    {
        paths[v2] = to_v2;
    }
}
void set_connectors(int v1, int v2, int dist, int dest, unsigned long long  *paths, double *ways, bool *visted, vector<int> *connectors, bool *is_connected)
{
    unsigned long long  to_v2{INF};
    to_v2 = paths[v1]  + dist;
    visted[v2] = true;
    if (paths[v2] >= to_v2)
    {
        if (paths[v2] == to_v2)
        {
            connectors[v2].push_back(v1);
        }
        else if (paths[v2] > to_v2)
        {
            connectors[v2] = {v1};
        }
        if (v2 == dest)
        {
            is_connected[v1] = true;
        }
        paths[v2] = to_v2;
    }
}
void set_ways(double *ways,bool  *is_set, vector<int> *connectors,int i)
{
    if(is_set[i]){
        return;
    }
    for (int c : connectors[i])
    {
        if(c > i){
            set_ways(ways,is_set,connectors,c);
        }
        ways[i] +=(unsigned long long )ways[c] % 1000000007 ;
    }
    is_set[i] = true;
}
int countPaths(int n, vector<vector<int>> &roads)
{
    bool visted[n];
    bool is_set[n];
    unsigned long long  paths[n];
    double ways[n];
    bool is_connected[n];
    vector<int> connectors[n];
    for (int i = 0; i < n; i++)
    {
        paths[i] = INF;
        is_connected[i] = false;
        connectors[i] = {};
        visted[i] = false;
        ways[i] = 0;
        is_set[i] = false;
    }
    visted[0] = true;
    paths[0] = 0;
    ways[0] = 1;
    connectors[0] = {0};
    int dest{n - 1};
    int count_paths_to_src{0};
    for (vector<int> road : roads)
    {
        int v1{road[0]}, v2{road[1]}, dist{road[2]};
        if (!visted[v1] && !visted[v2])
        {
            continue;
        }
        if (visted[v1])
        {
            set_vs(v1, v2, dist, dest, paths, ways, visted, connectors, is_connected);
        }
        if (visted[v2])
        {
            set_vs(v2, v1, dist, dest, paths, ways, visted, connectors, is_connected);
        }
    }
    for (vector<int> road : roads)
    {
        int v1{road[0]}, v2{road[1]}, dist{road[2]};
        set_connectors(v2, v1, dist, dest, paths, ways, visted, connectors, is_connected);
        set_connectors(v1, v2, dist, dest, paths, ways, visted, connectors, is_connected);
    }
    for (int i = 1; i < n; i++)
    {
        cout << "p : " << paths[i] << endl;
        set_ways(ways,is_set,connectors,i);
    }
    return (long long)ways[dest] % 1000000007 != 0 ? (long long)ways[dest] % 1000000007 : 1;
}
};
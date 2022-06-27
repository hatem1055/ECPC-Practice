class Solution {
	void DFS(unordered_map<int, vector<int>>& graph, int node, vector<bool>& visit, long long& NoOfPoints)
	{

		NoOfPoints++;
		visit[node] = true;
		for (auto& i : graph[node])
		{
			if (visit[i] == 0)
			{
				DFS(graph, i, visit, NoOfPoints);
			}
		}

	}
public:
	long long countPairs(int n, vector<vector<int>>& edges) {

		// making adjacency list
		unordered_map<int, vector<int>> graph;
		for (int i = 0; i < edges.size(); i++)
		{
			graph[edges[i][0]].push_back(edges[i][1]);
			graph[edges[i][1]].push_back(edges[i][0]);
		}

		// no of max pairs of given graph of n verticies is nC2
		long long ans = ((long long)n * (n - 1)) / 2;

		vector<bool> visited(n, false);

		long long NoOfPoints = 0;

		for (int i = 0; i < n; i++)
		{
			if (visited[i] == 0)
			{
				NoOfPoints = 0;
				DFS(graph, i, visited, NoOfPoints);
				// result  -> gives the total numbers of connected points 
				// Then we get the to know how many pairs does the (result) points have
				// Then subtract it from total no of pairs of the graph
				// so on untill we have the last number of unreachable pairs
				ans -= (NoOfPoints * (NoOfPoints - 1)) / 2;;

			}
		}
		return  ans;

	}
};
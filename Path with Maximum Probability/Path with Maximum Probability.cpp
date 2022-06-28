class Solution {
public:
	double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
		if (n > succProb.size())
			return 0.000000;
		vector<vector<pair<int, double>>> graph(n);
		for (int i = 0; i < edges.size(); i++)
		{
			graph[edges[i][0]].push_back({ edges[i][1] , succProb[i] });

			graph[edges[i][1]].push_back({ edges[i][0] , succProb[i] });
		}

		vector<bool> visit(n, false);
		vector<double> MAX_Prob(n, INT_MIN);
		priority_queue<pair<double, int>> q;
		q.push({ double(1.0) , start });

		while (!q.empty())
		{
			auto top = q.top();
			q.pop();
			double probability = top.first;
			int node = top.second;
			if (!visit[node])
			{
				visit[node] = true;
				for (auto& to : graph[node])
				{
					if (MAX_Prob[to.first] < to.second * probability)
					{
						MAX_Prob[to.first] = to.second * probability;
						q.push({ to.second * probability, to.first });
					}
				}
			}
		}
		return MAX_Prob[end];
	}
};
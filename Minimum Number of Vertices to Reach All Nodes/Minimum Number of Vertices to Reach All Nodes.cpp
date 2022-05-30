class Solution {
public:
	vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {

		vector<int> answer;
		vector<int>In_deg(n, 0);
		// 
		for (int i = 0; i < edges.size(); i++)
		{
			In_deg[edges[i][1]] = 50;
		}
		for (int i = 0; i < n; i++)
		{
			// This means that it has no incoming edge , So we have take this point 
			if (In_deg[i] == 0)
			{
				answer.push_back(i);
			}
		}
		return answer;
	}
};
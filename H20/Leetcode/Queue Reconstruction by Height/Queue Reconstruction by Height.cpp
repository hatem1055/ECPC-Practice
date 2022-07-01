class Solution {
public:
	vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
	{
		vector<vector<int>> queue;

		auto  cmp = [](vector<int>& p1, vector<int>& p2) {
			if (p1[0] != p2[0]) return p1[0] > p2[0];
			else return p1[1] < p2[1];
		};
		sort(people.begin(), people.end(), cmp);

		for (int i = 0; i < people.size(); i++)
		{
			queue.insert(queue.begin() + people[i][1], people[i]);


		}
		return queue;
	}
};
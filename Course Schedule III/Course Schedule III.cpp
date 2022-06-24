class Solution {
public:
	int scheduleCourse(vector<vector<int>>& courses) {
		// sorting vector[i] according to the 2nd column
		sort(courses.begin(), courses.end(), [](const vector<int>& a, vector<int>& b) {
			return a[1] < b[1];
			});
		int current_totalTime = 0;
		priority_queue<int> Highest_duration;
		for (int i = 0; i < courses.size(); i++)
		{

			current_totalTime += courses[i][0];
			Highest_duration.push(courses[i][0]);



			if (current_totalTime > courses[i][1])
			{
				current_totalTime -= Highest_duration.top();
				Highest_duration.pop();
			}

		}
		return Highest_duration.size();
	}
};
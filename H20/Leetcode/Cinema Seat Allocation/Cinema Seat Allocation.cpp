class Solution {
public:
	int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats)
	{


		int answer = 0;
		map<int, vector<int>> yarab;
		for (int i = 0; i < reservedSeats.size(); i++)
		{
			yarab[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
		}
		for (auto r : yarab)
		{
			vector<int> One_row(11, 0);
			for (int x : r.second)
				One_row[x] = 1;

			bool flag = false;
			if (One_row[2] == 0 && One_row[3] == 0 && One_row[4] == 0 && One_row[5] == 0)
			{
				answer++;
				flag = true;

			}
			if (One_row[6] == 0 && One_row[7] == 0 && One_row[8] == 0 && One_row[9] == 0)
			{
				answer++;
				flag = true;
			}
			if (!flag)
			{
				if (One_row[4] == 0 && One_row[5] == 0 && One_row[6] == 0 && One_row[7] == 0)
				{
					answer++;
				}
			}

		}
		return answer + (n - yarab.size()) * 2;
	}
};
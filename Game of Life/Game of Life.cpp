class Solution {
	bool validPoint(int x, int y, int rows, int columns)
	{
		if (x < rows && x >= 0 && y < columns && y >= 0)
		{
			return true;
		}
		return false;
	}

	vector<vector<int>> Get_neighbors(int x, int y, int rows, int columns)
	{
		vector<int> a;
		vector<vector<int>> points;

		a = { x - 1 , y };
		if (validPoint(a[0], a[1], rows, columns))
			points.push_back(a);

		a = { x - 1 , y - 1 };
		if (validPoint(a[0], a[1], rows, columns))
			points.push_back(a);

		a = { x - 1 , y + 1 };
		if (validPoint(a[0], a[1], rows, columns))
			points.push_back(a);

		a = { x  , y - 1 };
		if (validPoint(a[0], a[1], rows, columns))
			points.push_back(a);

		a = { x + 1 , y - 1 };
		if (validPoint(a[0], a[1], rows, columns))
			points.push_back(a);
		
		a = { x + 1 , y };
		if (validPoint(a[0], a[1], rows, columns))
			points.push_back(a);

		a = { x + 1 , y + 1 };
		if (validPoint(a[0], a[1], rows, columns))
			points.push_back(a);

		a = { x  , y + 1 };
		if (validPoint(a[0], a[1], rows, columns))
			points.push_back(a);

		return points;
	}
public:
	void gameOfLife(vector<vector<int>>& board)
	{
		vector<vector<int>> answer = board;
		int rows = board.size();
		int columns = board[0].size();
		vector<vector<int>>Neighbors;

		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < size(board[i]); j++)
			{
				bool Is_Cell_alive;
				if (board[i][j] == 1)
				{
					Is_Cell_alive = true;
				}
				else
				{
					Is_Cell_alive = false;
				}

				Neighbors = Get_neighbors(i, j, rows, columns);
				int alive = 0;
				int x;
				for (int k = 0; k < size(Neighbors); k++)
				{
					x = board[Neighbors[k][0]][Neighbors[k][1]];
					if (x == 1)
					{
						alive++;
					}

				}

				if (Is_Cell_alive)
				{
					if (alive < 2)
						answer[i][j] = 0;
					
					else if (alive >= 2 && alive < 4)
						answer[i][j] = 1;
					
					else if (alive > 3)
						answer[i][j] = 0;
				}
				else
					if (alive == 3)
						answer[i][j] = 1;
			}
		}

		board = answer;
	}
};
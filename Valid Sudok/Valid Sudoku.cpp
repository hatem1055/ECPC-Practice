class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board)
	{
		vector<int>horizontal(9, 0);
		vector<int>vertical(9, 0);
		vector<int>squares(9, 0);
		int x;
		//checking for the horizontal lines
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (board[i][j] != '.')
				{
					x = board[i][j] - '0';
					horizontal[x - 1] += 1;
					if (horizontal[x - 1] > 1)
					{
						return false;
					}
				}
			}

			fill(horizontal.begin(), horizontal.end(), 0);

		}
		// Checking vertical lines
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (board[j][i] != '.')
				{
					x = board[j][i] - '0';
					vertical[x - 1] += 1;
					if (vertical[x - 1] > 1)
					{
						return false;
					}
				}
			}
			fill(vertical.begin(), vertical.end(), 0);
		}


		// checking 3x3 squares
		int counter = 0;
		for (int i = 0; i < 9; i++)
		{
			counter++;
			for (int j = 0; j < 3; j++)
			{
				if (board[i][j] != '.')
				{
					x = board[i][j] - '0';
					squares[x - 1] += 1;
					if (squares[x - 1] > 1)
					{
						return false;
					}
				}
			}


			if (counter % 3 == 0)
			{
				fill(squares.begin(), squares.end(), 0);
			}


		}

		counter = 0;
		for (int i = 0; i < 9; i++)
		{
			counter++;
			for (int j = 3; j < 6; j++)
			{
				if (board[i][j] != '.')
				{
					x = board[i][j] - '0';
					squares[x - 1] += 1;
					if (squares[x - 1] > 1)
					{
						return false;
					}
				}

			}
			if (counter % 3 == 0)
			{
				fill(squares.begin(), squares.end(), 0);
			}


		}

		counter = 0;
		for (int i = 0; i < 9; i++)
		{
			counter++;
			for (int j = 6; j < 9; j++)
			{
				if (board[i][j] != '.')
				{

					x = board[i][j] - '0';
					squares[x - 1] += 1;
					if (squares[x - 1] > 1)
					{
						return false;
					}
				}

			}
			if (counter % 3 == 0)
			{
				fill(squares.begin(), squares.end(), 0);
			}


		}



		return true;
	}
};
class Solution {
public:
	int furthestBuilding(vector<int>& heights, int bricks, int ladder) {

		priority_queue<int> Bricks_Used;
		int i;
		for (i = 0; i < heights.size() - 1; i++)
		{

			if (heights[i] >= heights[i + 1])// No need of any bricks and ladders.
			{
				continue;
			}

			int diff = heights[i + 1] - heights[i];

			bricks -= diff;
			Bricks_Used.push(diff);

			if (bricks < 0)// We have to use a ladder in this case as there is no sufficient bricks.
			{// so we will return the max bricks used and substitute it with a ladder.
				bricks += Bricks_Used.top();
				Bricks_Used.pop();
				ladder--;

			}
			if (ladder < 0) // Here we dont have any ladders left and also bricks is not sufficient therefor we cant go any more further
			{
				break;
			}

		}
		return i;
	}
};
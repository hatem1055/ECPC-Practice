class Solution {
public:
	int wateringPlants(vector<int>& plants, int capacity)
	{
		int  Fixed_capacity = capacity;

		// initially we are at -1 index so we have a +1 step to reach index 0 ;
		int steps = 0;
		for (int i = 0; i < plants.size(); i++)
		{
			if (capacity >= plants[i])
			{
				capacity -= plants[i];
				steps++;
			}
			else// we have to return back to refill;
			{
				steps += (abs(-1 - i) * 2) - 1;
				capacity = Fixed_capacity;
				capacity -= plants[i];
			}


		}
		return steps;
	}
};
class Solution {
	static bool comp(vector<int>& p1, vector<int>& p2)
	{
		if (p1[1] != p2[1])
			return p1[1] > p2[1];
		else
			return p2[1] > p1[1];
	}
public:
	int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

		sort(boxTypes.begin(), boxTypes.end(), comp);


		int final = 0;
		for (int i = 0; i < boxTypes.size(); i++)
		{

			if (truckSize >= boxTypes[i][0])
			{
				truckSize -= boxTypes[i][0];
				final += (boxTypes[i][0] * boxTypes[i][1]);
			}
			else
			{
				final += (truckSize * boxTypes[i][1]);
				truckSize = 0;
			}
		}
		return final;
	}
};
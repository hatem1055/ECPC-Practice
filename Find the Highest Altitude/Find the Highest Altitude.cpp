class Solution {
public:
	int largestAltitude(vector<int>& gain)
	{
		int a = 0;
		for (int i = 1; i < gain.size(); i++)
		{
			gain[i] += gain[i - 1];
			a = max(a, gain[i]);
		}
		if (a < gain[0])
			a = gain[0];
		return a;
	}
};
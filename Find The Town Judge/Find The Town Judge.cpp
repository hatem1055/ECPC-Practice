class Solution {
public:
	int findJudge(int n, vector<vector<int>>& trust) {

		int f;
		bool Trust_none_exist;
		for (int i = 1; i <= n; i++)
		{
			Trust_none_exist = true;
			for (int j = 0; j < trust.size(); j++)
			{
				if (i == trust[j][0])
				{
					Trust_none_exist = false;
					break;
				}
			}
			if (Trust_none_exist)
			{
				f = i;
				break;
			}
		}
		int counter = 0;
		for (int i = 0; i < trust.size(); i++)
		{
			if (f == trust[i][1])
			{
				counter++;
			}
		}
		if (counter == n - 1)
		{
			return f;
		}
		return -1;
	}
};
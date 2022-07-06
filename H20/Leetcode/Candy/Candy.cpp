class Solution {
public:
	int candy(vector<int>& rating) {
		vector<int> result(rating.size(), 1);
		for (int i = 1; i < rating.size(); i++)
		{
			if (rating[i] > rating[i - 1])
			{
				result[i] = result[i - 1] + 1;
			}

		}
		for (int i = size(result) - 1; i > 0; i--)
		{
			if (rating[i - 1] > rating[i])
			{
				result[i - 1] = max(result[i - 1], result[i] + 1);
			}
		}
		int final = 0;
		for (int i = 0; i < result.size(); i++)
		{
			final += result[i];
		}

		return final;
	}
};
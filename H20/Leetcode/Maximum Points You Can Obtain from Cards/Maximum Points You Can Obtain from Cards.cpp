class Solution {
public:
	int maxScore(vector<int>& cards, int k)
	{

		vector<int> prefix(cards.size());
		priority_queue<int> yarab;
		int i = 0;
		int j = cards.size() - 1;
		int sum = 0;
		// Prefix sum 
		for (int i = 0; i < k; i++)
		{
			sum += cards[i];
		}


		yarab.push(sum);
		// Generating all possible values by using sliding window approach
		while (k)
		{
			i = k - 1;
			sum = sum - cards[i--] + cards[j--];
			yarab.push(sum);
			k--;
		}
		return yarab.top();

	}

};
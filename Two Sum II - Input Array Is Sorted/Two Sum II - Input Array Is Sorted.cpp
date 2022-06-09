class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target)
	{
		int start = 0;
		int end = size(numbers) - 1;
		while (numbers[start] + numbers[end] != target)
		{

			if (numbers[start] + numbers[end] > target)
			{
				end--;
			}
			else
			{
				start++;
			}



		}
		return vector<int>({ start + 1 , end + 1 });
	}
};
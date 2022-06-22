class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums)
	{
		int left = 0;
		int right = nums.size() - 1;
		vector<int> result(nums.size());
		for (int i = nums.size() - 1; i >= 0; i--)
		{
			if (abs(nums[left]) > abs(nums[right]))
			{
				result[i] = pow(nums[left++], 2);
			}
			else
			{
				result[i] = pow(nums[right--], 2);
			}
		}
		return result;
	}
};
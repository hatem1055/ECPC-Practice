class Solution {
public:
	int maximumUniqueSubarray(vector<int>& nums)
	{

		unordered_set<int> set;
		int curr_sum = 0;
		int i = 0, j = 0;
		int Final = 0;
		while (j < nums.size())
		{
			while (set.count(nums[j]) > 0)
			{

				curr_sum -= nums[i];
				set.erase(nums[i++]);
			}
			curr_sum += nums[j];
			set.insert(nums[j++]);




			Final = max(Final, curr_sum);

		}

		return Final;
	}
};
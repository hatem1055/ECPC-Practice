class Solution {
public:
	vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations)
	{


		map<int, int> store;

		for (int i = 0; i < nums.size(); i++)
		{
			store[nums[i]] = i;
		}



		int key;
		int value;
		for (int i = 0; i < operations.size(); i++)
		{
			key = store.at(operations[i][0]);
			value = operations[i][1];

			nums[key] = value;

			store.erase(value);
			store.insert({ value,key });


		}

		return nums;



	}
};
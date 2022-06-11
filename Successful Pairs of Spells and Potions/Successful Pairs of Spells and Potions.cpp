class Solution {


public:
	vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

		int n = size(spells);
		int m = size(potions);
		vector<int> result;
		sort(potions.begin(), potions.end());
		for (int i = 0; i < size(spells); i++)
		{
			long double x = success / double(spells[i]);
			x = ceil(x);
			std::vector<int>::iterator low1;
			low1 = lower_bound(potions.begin(), potions.end(), x);


			m - (low1 - potions.begin()) == 0 ? result.push_back(0) : result.push_back(m - (low1 - potions.begin()));
		}


		return result;
	}
};
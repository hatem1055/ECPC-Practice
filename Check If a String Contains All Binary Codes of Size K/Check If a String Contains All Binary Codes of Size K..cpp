class Solution {
public:
	bool hasAllCodes(string s, int k) {

		set<string> nums;

		for (int i = 0; i <= s.length(); i++)
		{
			string x = s.substr(i, k);
			if (x.length() != k)
			{

				continue;
			}
			// exists.find(a[i-1] - i) == exists.end()
			if (nums.find(x) != nums.end())
			{

				continue;
			}
			nums.insert(x);
			if (nums.size() == pow(2, k))
			{
				return true;

			}

		}
		return false;

	}

};


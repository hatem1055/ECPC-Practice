class Solution {
public:
	bool isPossible(vector<int>& target)
	{
		priority_queue<int> help;
		long long int sum = 0;
		for (int i = 0; i < target.size(); i++)
		{
			help.push(target[i]);
			sum += target[i];
		}
		while (help.top() != 1)
		{

			sum -= help.top();

			if (sum == 0)
				return false;

			int old_element = help.top() % sum;

			if (sum != 1 && old_element == 0 || old_element == help.top())
				return false;

			help.pop();
			help.push(old_element);
			sum += old_element;


		}
		return true;
	}
};
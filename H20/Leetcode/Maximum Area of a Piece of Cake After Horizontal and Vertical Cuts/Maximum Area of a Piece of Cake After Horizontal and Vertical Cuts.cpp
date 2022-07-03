class Solution {
public:
	int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
		const long  mod = 1000000007;

		int H_number = horizontalCuts.size();
		int V_number = verticalCuts.size();


		sort(horizontalCuts.begin(), horizontalCuts.end());
		sort(verticalCuts.begin(), verticalCuts.end());

		priority_queue<long> max_height;
		max_height.push(horizontalCuts[0]);

		for (int i = 1; i < H_number; i++) {
			max_height.push(horizontalCuts[i] - horizontalCuts[i - 1]);
		}
		max_height.push(h - horizontalCuts[H_number - 1]);





		priority_queue<long> max_width;

		max_width.push(verticalCuts[0]);
		for (int i = 1; i < V_number; i++)
		{
			max_width.push(verticalCuts[i] - verticalCuts[i - 1]);
		}
		max_width.push(w - verticalCuts[V_number - 1]);



		return ((max_height.top() * max_width.top()) % mod);
	}
};
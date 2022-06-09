class Solution{
public:

	/*for (int i = 0; i < n; i++)
	{
		nums1[m++] = nums2[i];
	}

	sort(nums1.begin(), nums1.end());*/
	void merge(vector<int>&A, int m, vector<int>&B, int n) {
		 int a = m - 1;
		int b = n - 1;
		int i = m + n - 1;    

		while (a >= 0 && b >= 0) {
			if (A[a] > B[b])
			{
				A[i--] = A[a--];
			}
			else            
				A[i--] = B[b--];
		}

		while (b >= 0)         
			A[i--] = B[b--];
	}
};

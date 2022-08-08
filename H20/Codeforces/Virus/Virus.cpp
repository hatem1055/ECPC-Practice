/*

	    * * * * *        *             *           * * * * *        *          * * * *                          
		*               *  *          *  *         *               *  *        *     *                             
		*  * *	*	   *    *        *    *        * * * *        *    *       * * * *         
		*	  	*	  * **** *      * **** *       *             * **** *      * *                   
		*       *    *        *    *        *      *            *        *     *   *                          
        * * * * *   *          *  *          *     *           *          *    *    *                                
*/


#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>
#include <set>
#include <cmath>
#include <queue>
#include<unordered_map>
using namespace std;


int main()
{
	int t;cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> infected(m);
		priority_queue<long long> yarab;
		for (int i = 0; i < m; i++)
		{
			cin >> infected[i];
		}
		sort(infected.begin(), infected.end());

		for (int i = 0; i < m - 1; i++)
		{
			int x;
			x = infected[i + 1] - infected[i];
			yarab.push(x - 1);
		}
		yarab.push((infected[0] - 1) + (n - infected[m - 1]));
		int days = 0;
		int uninfected = 0;
		while (yarab.size() != 0 )
		{
			int x = yarab.top();
			yarab.pop();
			
			int y = x - 2 * days;
			if (y > 1)
			{
				uninfected += y - 1;

			}
			if (y == 1)
			{
				uninfected += y;
			}

			days += 2;
			
		}
		cout << n - (uninfected) << endl;
		
		
	}
}
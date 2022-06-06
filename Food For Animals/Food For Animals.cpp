#include<iostream>


using namespace std;


int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		if (a==b && b== c && c== x && x==y)
		{
			cout << "YES" << endl;
			continue;
		}
		if (a + b + c < x + y)
		{
			cout << "NO" << endl;
			continue;
		}
		int dog_X = x - a;
		
		if (dog_X < 0)
		{
			a -= x;
			x = 0;
		}
		else
		{
			x -= a;
			a = 0; 
		}
		
		int cat_y = y - b;
		if (cat_y < 0)
		{
			b -= y;
			y = 0;
		}
		else
		{
			y -= b;
			b = 0;
		}
		
		
		if (c >= x + y)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

}
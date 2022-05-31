#include <iostream>
#include <vector>
#include <tgmath.h>

# define M_PI           3.14159265358979323846

using namespace std;


// c1 >> centre one 
bool Is_point_in_circle(double c1 , double c2 , int r,double x, double y)
{
	::cout << "the equation is " <<double( pow((x - c1), 2) + (pow((y - c2), 2))) << endl;
	if (pow((x - c1),2) + pow((y-c2),2) <= pow(r,2)+0.005  ) // 0.005 for error consideration
	{
		::cout << "done  ";
		return true;
	}
	return false;
	
}

void Find_centres_circles(vector<vector<double>>& centres, double x1, double y1, double x2, double y2, int r )
{ // point one = (x1 ,y1)        point two = (x2,y2)

	double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	int diameter = 2 * r;
	::cout << "Distance between two points " << distance<< endl;
	if (distance > diameter)
	{
		// No any cirlces can contain these two points
		//do nothing	
		::cout << "NO points" << endl;
	}
	// Only one cirlce that can contain these two points -> we have to know its centre
	else if (distance ==diameter)
	{
		::cout << "one point only \n";
		// the centre will be the midpoint between these two points
		::cout << "x will be " << (x1 + x2) / 2 << endl;
		::cout << "y will be " << (y1 + y2) / 2 << endl;
		vector<double> c = { (x1 + x2) / 2 , (y1 + y2) / 2 };
		
		centres.push_back(c);
	
	}
	else if (distance < diameter)
	{


		// midpoint for the two given points
		double midpoint[2] = { (x1 + x2) / 2, (y1 + y2) / 2 } ;
		double chord_prep_distance = sqrt(pow(r, 2) - pow(distance / 2, 2));
		::cout << "chrd distance = " << chord_prep_distance << endl;
		
		
		double Angel;
		if (x2 - x1 == 0) // slope is undefined -> Parallel to y - axis
		{
			Angel = 0;
		}

		else if ( y2 - y1 == 0) // slope = 0 -> Parallel to x - axis
		{
			Angel = M_PI / 2;
		}
		else
		{
			// the slope of the given two points
			double slope = double(y2 - y1) / double(x2 - x1);
			::cout << "The slope is " << slope << endl;


			// The slope of the prependicular line  -1/m * m = 1
			double perp_slope = -1 / double(slope);
			::cout << "prep slope is " << perp_slope << endl;

			 Angel = atan(perp_slope);

			::cout << "The Angel is " << Angel << endl;
		}

		

		x1 = (midpoint[0] + chord_prep_distance * cos(Angel));
		x2 = (midpoint[0] - chord_prep_distance * cos(Angel));

		y1 = (midpoint[1]  + chord_prep_distance * sin(Angel));
		y2 = (midpoint[1] - chord_prep_distance* sin(Angel));

		
		::cout << x1 << " " << y1 << endl;
		::cout << x2 << " " << y2 << endl;

		vector<double>a = { x1 , y1 };
		vector<double> b = { x2 , y2 };
		centres.push_back(a);
		centres.push_back(b);


	}












}



int main()
{
	vector<vector<int>> darts = { {4, -4}, {-2, 0}, {0, 2}, {-3, 1}, {2, 3}, {2, 4}, {1, 1},{0,0} };

	int r = 3	;
	vector<vector<double>> centres;
	
	int No_points=0 ;
	int counter_helper =0 ;
	for (int i = 0; i < ( darts.size() - 1)  ; i++)
	{
		
		::cout << "@ iterator " << i << endl;
		for (int j = i +1; j < darts.size(); j++)
		{
			(Find_centres_circles(centres, darts[i][0], darts[i][1], darts[j][0], darts[j][1], r));

		}
		
	}


	for (int i = 0; i < centres.size(); i++)
	{

		counter_helper = 0;
		::cout << "The First Centre is " << centres[i][0] << " " << centres[i][1] << endl;
		for (int j = 0; j < darts.size(); j++)
		{
			
			if (Is_point_in_circle(centres[i][0], centres[i][1], r, darts[j][0], darts[j][1]) == true)
			{
				counter_helper++;

			}

		}
		::cout << "Counter is " << counter_helper << endl;
		::cout << "-------------------------------\n";
		

		if (No_points == 0)
			No_points = counter_helper;

		if (counter_helper > No_points)
			No_points = counter_helper;

	}
	if (No_points == 0)
	{
		No_points = 1;
	}
		::cout << "final is " << No_points << endl;
	
	


}
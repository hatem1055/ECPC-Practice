

# define M_PI           3.14159265358979323846

bool Is_point_in_circle(double c1, double c2, int r, double x, double y)
{

	if (pow((x - c1), 2) + pow((y - c2), 2) <= pow(r, 2) + 0.0005) // 0.0005 for error consideration
	{

		return true;
	}
	return false;

}

//------------------------------------------------------------------

void Find_centres_circles(vector<vector<double>>& centres, double x1, double y1, double x2, double y2, int r)
{ // point one = (x1 ,y1)        point two = (x2,y2)


	// distance between two points
	double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	int diameter = 2 * r;

	if (distance > diameter)
	{
		// No any cirlces can contain these two points
		//do nothing	

	}
	// Only one cirlce that can contain these two points -> we have to know its centre
	else if (distance == diameter)
	{

		// the centre will be the midpoint between these two points

		vector<double> c = { (x1 + x2) / 2 , (y1 + y2) / 2 };
		centres.push_back(c);

	}
	else if (distance < diameter)
	{
		//There are Two cirlces that can contain these two point -> We have to know their centres
		// midpoint for the two given points
		double midpoint[2] = { (x1 + x2) / 2, (y1 + y2) / 2 };
		double chord_prep_distance = sqrt(pow(r, 2) - pow(distance / 2, 2));
		double Angel;
		if (x2 - x1 == 0) // slope is undefined -> Parallel to y - axis
		{
			Angel = 0;
		}

		else if (y2 - y1 == 0) // slope = 0 -> Parallel to x - axis
		{
			Angel = M_PI / 2;
		}
		else
		{
			// the slope of the given two points
			double slope = double(y2 - y1) / double(x2 - x1);

			// The slope of the prependicular line  -1/m * m = 1
			double perp_slope = -1 / double(slope);
			Angel = atan(perp_slope);


		}
		x1 = (midpoint[0] + chord_prep_distance * cos(Angel));
		x2 = (midpoint[0] - chord_prep_distance * cos(Angel));

		y1 = (midpoint[1] + chord_prep_distance * sin(Angel));
		y2 = (midpoint[1] - chord_prep_distance * sin(Angel));



		vector<double>a = { x1 , y1 };
		vector<double> b = { x2 , y2 };
		centres.push_back(a);
		centres.push_back(b);


	}
}

class Solution {
public:
	int numPoints(vector<vector<int>>& darts, int r) {



		vector<vector<double>> centres;

		int No_points = 0;
		int counter_helper = 0;
		for (int i = 0; i < (darts.size() - 1); i++)
		{


			for (int j = i + 1; j < darts.size(); j++)
			{
				(Find_centres_circles(centres, darts[i][0], darts[i][1], darts[j][0], darts[j][1], r));

			}

		}


		for (int i = 0; i < centres.size(); i++)
		{

			counter_helper = 0;

			for (int j = 0; j < darts.size(); j++)
			{

				if (Is_point_in_circle(centres[i][0], centres[i][1], r, darts[j][0], darts[j][1]) == true)
				{
					counter_helper++;

				}

			}


			if (No_points == 0)
				No_points = counter_helper;

			if (counter_helper > No_points)
				No_points = counter_helper;

		}

		if (No_points == 0)
			No_points = 1;
		return No_points;






	}
};
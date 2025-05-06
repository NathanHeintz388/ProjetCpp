#ifndef POINT_HPP
#define POINT_HPP

struct Point {
	double x, y;

	Point(double x_val = 0, double y_val = 0);
	
	double distance(Point B = Point()); //
};

#endif // POINT_HPP
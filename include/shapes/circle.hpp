#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "point.hpp"

struct Circle {
	double radius;
	Point center;
	
	Circle(double r, Point c = Point());
	
	double circumference();
	
	double area();
	
	void draw();
	
	void translate(Point T);
	
	void resize(double ratio); // resize while maintaining center
	
	bool equals(Circle circle);
	
};

#endif // CIRCLE_HPP
#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "point.hpp"
#include "circle.hpp"

struct Triangle {
	Point A,B,C;
	
	Triangle(Point P, Point Q, Point R);
	
	double perimeter();
	
	double area();
	
	Point center(); // computes the center of gravity of the triangle
	
	void draw();
	
	void translate(Point T);
	
	void resize(double ratio); // resize while maintaining center
	
	void rotate(double angle); // rotate counterclockwise around the center of the triangle 
	
	bool equals(Triangle triangle);
	
	bool isRightAngled();
	
	bool isEquilateral();
	
	bool isIsoceles();
	
	Circle inscribedCircle();
	
	Circle circumscribedCircle();
};

#endif // TRIANGLE_HPP
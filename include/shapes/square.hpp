#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "point.hpp"
#include "circle.hpp"

struct Square {
	Point A,C; // opposite corners of the square

	Square(Point P, Point Q);
	
	double side();
	
	double perimeter();
	
	double area();
	
	Point center();
	
	void draw();
	
	void translate(Point T);
	
	void resize(double ratio); // resize while maintaining center
	
	void rotate(double angle); // rotate counterclockwise around the center of the triangle 
	
	bool equals(Square square);
	
	Circle inscribedCircle();
	
	Circle circumscribedCircle();

};

#endif // SQUARE_HPP
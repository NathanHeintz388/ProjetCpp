#include "point.hpp"
#include "shapes/square.hpp"
#include <cmath>
#include <vector>
#include "draw.hpp"

Square::Square(Point P, Point R){
	A=P;
	C=R;
	}
double Square::side(){
	return(A.distance(C)/sqrt(2));
}
double Square::perimeter(){
	return 4*side();
}
double Square::area(){
	return side()*side();
}
Point Square::center(){
	return Point((A.x+C.x)/2,(A.y+C.y)/2);
}
void Square::draw(){
	std::vector<Point> points;
	Point vecAM;
	vecAM(center.x-A.x,center.y-A.y);
	Point B(center.x-vecAM.y,center.y+vecAM.x);
	Point D(center.x+vecAM.x,center.y-vecAM.x);
	std::vector<Point> points;
	points.push_back(A);
	points.push_back(B);
	points.push_back(C);
	points.push_back(D);
	draw_picture(points);}
	
	


	
	
#include "point.hpp"
#include "shapes/square.hpp"
#include <cmath>
#include <vector>
#include "draw.hpp"

Square::Square(Point P, Point R){
	A=P;
	C=R;}
double Square::side(){
return(A.distance(C)/sqrt(2));}
double Square::perimeter(){
return 4*side();}
double Square::area(){
return side()*side();}
Point Square::center(){
	return Point((A.x+C.x)/2,(A.y+C.y)/2);}
void Square::draw(){
std::vector<Point> points;
points.at(0)=A;
points.at(1)=Point(A.x, A.y-side());
points.at(2)=C;
points.at(3)=Point(C.x, C.y+side());
draw_picture(points);}
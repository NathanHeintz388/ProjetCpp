#include "point.hpp"
#include "shapes/square.hpp"
#include <cmath>

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
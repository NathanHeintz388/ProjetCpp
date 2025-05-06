#include "point.hpp"
#include "shapes/square.hpp"

Square::Square(Point P, Point R){
	A=P;
	C=R;
double Square::side(){
		return(P.distance(R)/sqrt(2))
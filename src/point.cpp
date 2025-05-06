#include "point.hpp"
#include <cmath>
Point::Point(double x_val, double y_val){
x=x_val;
y=y_val;}
double Point::distance(Point B){
	return sqrt((y-B.y)*(y-B.y)+(x-B.x)*(x-B.x));} 
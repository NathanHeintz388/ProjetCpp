#include "point.hpp"
#include "shapes/circle.hpp"
#include <cmath>
using namespace std;

double pi=3.14159265358979323846;

Circle::Circle(double r, Point c) : radius(r), center(c) {};

double Circle::circumference(){
	return 2*pi*radius;
}

double Circle::area(){
	return radius*radius*pi;
}

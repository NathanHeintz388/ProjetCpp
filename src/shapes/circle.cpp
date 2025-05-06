#include "point.hpp"
#include "shapes/circle.hpp"
#include <cmath>
using namespace std;

Circle::Circle(double r, Point c) : radius(r), center(c) {};

double Circle::circumference{
	return 2*M_pi*radius;
}

double Circle::area{
	return r*r*M_pi;
}

double Circle::draw{
	return 0;
}
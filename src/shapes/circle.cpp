#include "point.hpp"
#include "draw.hpp"
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

void Circle::translate(Point T){
	center.x+=T.x;
	center.y+=T.y;
	
}

void Circle::resize(double ratio){
	radius*=ratio;
}

bool Circle::equals(Circle circle){
	if (circle.radius==radius){
		return true;
	}
	return false;
}

void Circle::draw(){
	vector<Point> liste ={};
	Point ajout=center;
	for (int i=0;i<361;i++){
		double angle=i*pi/180;
		ajout.x = radius*cos(angle);
		ajout.y = radius*sin(angle);
		liste.push_back(ajout);
		
	}
	draw_picture(liste);
}
	
#include "point.hpp"
#include "shapes/triangle.hpp"
#include "draw.hpp"
#include <cmath>
using namespace std;
#include <vector>

Triangle::Triangle(Point P, Point Q, Point R) : A(P), B(Q), C(R) {};
double Triangle::perimeter(){
	return A.distance(B) + B.distance(C) + C.distance(A);
}
double Triangle::area(){
	double AB=A.distance(B);
	double BC=B.distance(C);
	double CA=C.distance(A);
	double P=(AB+BC+CA)/2;
	return sqrt(P*(P-AB)*(P-BC)*(P-CA));
}
Point Triangle::center(){
	Point G;
	G.x=(A.x+B.x+C.x)/3;
	G.y=(A.y+B.y+C.y)/3;
	return G;
}
void Triangle::draw(){
	vector<Point> V = {A,B,C};
	draw_picture(V);
}
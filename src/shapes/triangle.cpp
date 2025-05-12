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
	vector<Point> V = {A,B,C,A};
	draw_picture(V);
}
void Triangle::translate(Point T){
	A.x=A.x+T.x;
	B.x=B.x+T.x;
	C.x=C.x+T.x;
	A.y=A.y+T.y;
	B.y=B.y+T.y;
	C.y=C.y+T.y;
}
void Triangle::resize(double ratio){
	Point centre=Triangle::center();
	A.x=(A.x-centre.x)*ratio+centre.x;
	B.x=(B.x-centre.x)*ratio+centre.x;
	C.x=(C.x-centre.x)*ratio+centre.x;
	A.y=(A.y-centre.y)*ratio+centre.y;
	B.y=(B.y-centre.y)*ratio+centre.y;
	C.y=(C.y-centre.y)*ratio+centre.y;
}
void Triangle::rotate(double angle){
	angle=angle*numbers::pi/180;
	Point centre=Triangle::center();
	A.x=(A.x-centre.x)*cos(angle)+centre.x;
	B.x=(B.x-centre.x)*cos(angle)+centre.x;
	C.x=(C.x-centre.x)*cos(angle)+centre.x;
	A.y=(A.y-centre.y)*sin(angle)+centre.y;
	B.y=(B.y-centre.y)*sin(angle)+centre.y;
	C.y=(C.y-centre.y)*sin(angle)+centre.y;
}
bool Triangle::equals(Triangle triangle){
	Point centre=Triangle::center();
	if(centre.x!=triangle.center().x and centre.y!=triangle.center().y)
	if(A.distance(B)==triangle.A.distance(B)){
		return B.distance(C)==triangle.B.distance(C) and C.distance(A)==triangle.C.distance(A);
	}
	if(A.distance(B)==triangle.B.distance(C)){
		return B.distance(C)==triangle.C.distance(A) and C.distance(A)==triangle.A.distance(B);
	}
	if(A.distance(B)==triangle.C.distance(A)){
		return B.distance(C)==triangle.A.distance(B) and C.distance(A)==triangle.B.distance(C);
	}
	return false;
}
bool Triangle::isRightAngled(){
	double AB=A.distance(B),BC=B.distance(C),CA=C.distance(A);
	return AB*AB==BC*BC+CA*CA or AB*AB+BC*BC==CA*CA or AB*AB+CA*CA==BC*BC;
}
bool Triangle::isEquilateral(){
	return A.distance(B)==B.distance(C) and A.distance(B)==C.distance(A);
}
bool Triangle::isIsoceles(){
	return A.distance(B)==B.distance(C) or B.distance(C)==C.distance(A) or C.distance(A)==A.distance(B);
}

#include "draw.hpp"
#include "point.hpp"
#include "shapes.hpp"
#include <vector>
#include <string>
#include <iostream>


# define M_PI           3.14159265358979323846  /* pi */



int main() {
	
	// Define points in a vector
	 std::vector<Point> points = {
		Point(0, 0),
		Point(100, 0),
		Point(100, 100),
		Point(0, 100),
		Point(0, 0)
		
	};
	
	// Draw the picture by connecting the points
	// draw_picture(points);
	
	// Perform Tests
	// CIRCLE TESTS
	Circle c(10, Point(100, 0));
	std::cout << "Test Circle Circumference : " << c.circumference() << " valeur attendue : " << (2*M_PI*10) << std::endl;
	
	std::cout << "Test Circle Area : " << c.area() << " valeur attendue : " << (M_PI*10*10) << std::endl;
	
	Circle c2(5, Point(50, 0));
	c2.translate(Point(50, 0));
	c2.resize(2);
	
	std::cout << "Test Circle Resize, Translate and Equals : " << c.equals(c2) << " valeur attendue : " << true << std::endl;
	
	c.draw();
	
	c2.resize(10);
	c2.draw();
	
	std::cout << "Test Points Distance : " << points.at(0).distance(points.at(1)) << " valeur attendue : " << 100 << std::endl;
	
	// TRIANGLE TESTS
	
	Triangle t(Point(0, 0), Point(0, 1), Point(1, 1));
	std::cout << "Test Triangle Perimeter : " << t.perimeter() << " valeur attendue : " << 4 << std::endl;
	std::cout << "Test Triangle Area : " << t.area() << " valeur attendue : " << 0.5 << std::endl;
	
	t.resize(100.0);
	
	t.draw();
	Point triangle_center = t.center();
	
	std::cout << "Test Triangle Center : " << triangle_center.x << " " << triangle_center.y << " valeur attendue : " << 33.333 << " " << 66.666 << std::endl;
	
	t.translate(Point(-300, -200));
	t.draw();

	// std::cout << "Test Triangle Equals : " << t.equals(Triangle(Point(0, 0), Point(0, 100), Point(100, 100))) << " valeur attendue : " << true << std::endl;
	// TODO : Check Test
	std::cout << "Test Triangle Equilateral : " << t.isEquilateral() << " valeur attendue : " << false << std::endl;
	
	 std::cout << "Test Triangle Right Hangled : " << t.isRightAngled() << " valeur attendue : " << true << std::endl;
	
	/*
	
	void rotate(double angle); // rotate counterclockwise around the center of the triangle 
	
	
	bool isIsoceles();
	
	Circle inscribedCircle();
	
	Circle circumscribedCircle();*/
	
	// SQUARE TESTS
	
	Square s(Point(0, 0), Point(1, 1));
	
	std::cout << "Test Square Side : " << s.side() << " valeur attendue : " << 1 << std::endl;
	std::cout << "Test Square Perimeter : " << s.perimeter() << " valeur attendue : " << 4 << std::endl;
	std::cout << "Test Square Area : " << s.area() << " valeur attendue : " << 1 << std::endl;
	
	Point square_center = s.center();
	std::cout << "Test Square Center : " << square_center.x << " " << square_center.y << " valeur attendue : " << 0.5 << " " << 0.5 << std::endl;
	
	s.draw();
	
	
	
	return 0;
}

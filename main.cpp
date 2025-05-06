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
	Circle c(10, Point(100, 0));
	std::cout << "Test Circle Circumference : " << c.circumference() << " valeur attendue : " << (2*M_PI*10) << std::endl;
	
	std::cout << "Test Circle Area : " << c.area() << " valeur attendue : " << (M_PI*10*10) << std::endl;
	
	Circle c2(5, Point(50, 0));
	c2.translate(Point(50, 0));
	c2.resize(2);
	
	std::cout << "Test Circle Resize, Translate and Equals : " << c.equals(c2) << " valeur attendue :" << true << std::endl;
	
	// c.draw();
	
	std::cout << "Test Points Distance : " << points.at(0).distance(points.at(1)) << " valeur attendue :" << 100 << std::endl;
	
	return 0;
}

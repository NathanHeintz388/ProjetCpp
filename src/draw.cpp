#include "draw.hpp"
#include "point.hpp"
#include "CTurtle.hpp"
#include <vector>

namespace ct = cturtle;

void draw_picture(const std::vector<Point>& points) {
	ct::TurtleScreen screen;
	ct::Turtle t(screen);
	
	if (points.empty()) return; // Nothing to draw
	t.hideturtle();
	t.penup();
	t.setposition(points[0].x, points[0].y); // Move to the first point
	t.pendown();

	// Draw lines connecting each consecutive point
	for (size_t i = 1; i < points.size(); ++i) {
		t.setposition(points[i].x, points[i].y);
	}
	screen.exitonclick();  // Keep the window open until clicked
}
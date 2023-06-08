#include <iostream>
#include "Point.h"
using namespace std;

void Point::Translate(int dx, int dy, int max) {
	x = (x + dx) % max;
	y = (y + dy) % max;
}

void Point::MoveTo(int px, int py, int max) {
	x = px % max;
	y = py % max;
}

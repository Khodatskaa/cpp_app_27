#include "Point.h"

int main() {
		Point p1;
	p1.inputCoordinates();
	p1.displayCoordinates();

	Point p2(1.0, 2.0, 3.0);
	p2.displayCoordinates();

	Point::saveToFile("point.txt");
	Point::loadFromFile("point.txt");
	p2.displayCoordinates();

	return 0;
}


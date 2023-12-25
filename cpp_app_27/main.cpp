#include "Point.h"
#include <iostream>

int main() {
    Point point1;
    Point point2;

    point1.inputPointData();
    point2.inputPointData();

    std::cout << "\nPoint 1 Data:\n";
    point1.displayPointData();

    std::cout << "\nPoint 2 Data:\n";
    point2.displayPointData();

    point1.saveToFile("point_data.txt");

    Point newPoint;
    newPoint.loadFromFile("point_data.txt");
    std::cout << "\nLoaded Point Data:\n";
    newPoint.displayPointData();

    std::cout << "\nTotal Points Created: " << Point::getPointCount() << std::endl;

    return 0;
}

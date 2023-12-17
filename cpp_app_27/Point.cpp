#include "Point.h"

double Point::x = 0.0;
double Point::y = 0.0;
double Point::z = 0.0;

Point::Point() {}

Point::Point(double x, double y, double z)
{
}

void Point::inputCoordinates() {
    std::cout << "Enter x-coordinate: ";
    std::cin >> Point::x;
    std::cout << "Enter y-coordinate: ";
    std::cin >> Point::y;
    std::cout << "Enter z-coordinate: ";
    std::cin >> Point::z;
}

void Point::displayCoordinates() const {
    std::cout << "Coordinates: (" << Point::x << ", " << Point::y << ", " << Point::z << ")\n";
}

double Point::getX() {
    return Point::x;
}

double Point::getY() {
    return Point::y;
}

double Point::getZ() {
    return Point::z;
}

void Point::saveToFile(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << Point::x << " " << Point::y << " " << Point::z << "\n";
        outFile.close();
        std::cout << "Data saved to file successfully\n";
    }
    else {
        std::cerr << "Unable to open the file for writing\n";
    }
}

void Point::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        inFile >> Point::x >> Point::y >> Point::z;
        inFile.close();
        std::cout << "Data loaded from file successfully\n";
    }
    else {
        std::cerr << "Unable to open the file for reading\n";
    }
}

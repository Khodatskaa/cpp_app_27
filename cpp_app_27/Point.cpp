#include "Point.h"

int Point::pointCount = 0; 

Point::Point() : x(0.0), y(0.0), z(0.0) {
    pointCount++;
}

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {
    pointCount++;
}

inline void Point::inputPointData() {
    std::cout << "Enter point coordinates (x y z): ";
    std::cin >> x >> y >> z;
}

inline void Point::displayPointData() const {
    std::cout << "Point Coordinates: (" << x << ", " << y << ", " << z << ")\n";
}

inline void Point::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << x << " " << y << " " << z << std::endl;
        file.close();
        std::cout << "Point data saved to file: " << filename << std::endl;
    }
    else {
        std::cout << "Unable to open file for writing: " << filename << std::endl;
    }
}

inline void Point::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        file >> x >> y >> z;
        file.close();
        std::cout << "Point data loaded from file: " << filename << std::endl;
    }
    else {
        std::cout << "Unable to open file for reading: " << filename << std::endl;
    }
}

int Point::getPointCount() {
    return pointCount;
}

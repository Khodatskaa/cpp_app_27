#include "Point.h"

double Point::x = 0.0;
double Point::y = 0.0;
double Point::z = 0.0;

Point::Point(double x, double y, double z) {
}

inline void Point::inputCoordinates() {
    std::cout << "Enter x-coordinate: ";
    std::cin >> x;
    std::cout << "Enter y-coordinate: ";
    std::cin >> y;
    std::cout << "Enter z-coordinate: ";
    std::cin >> z;
}

inline void Point::displayCoordinates() const {
    std::cout << "Coordinates: (" << x << ", " << y << ", " << z << ")\n";
}

inline void Point::saveToFile(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << x << " " << y << " " << z << "\n";
        outFile.close();
        std::cout << "Data saved to file successfully\n";
    }
    else {
        std::cout << "Unable to open the file for writing\n";
    }
}

inline void Point::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        inFile >> x >> y >> z;
        inFile.close();
        std::cout << "Data loaded from file successfully\n";
    }
    else {
        std::cout << "Unable to open the file for reading\n";
    }
}


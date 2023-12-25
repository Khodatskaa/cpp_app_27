#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>

class Point {
private:
    static int pointCount; 
    double x, y, z;

public:
    Point();
    Point(double x, double y, double z);
    void inputPointData();
    void displayPointData() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);

    double getX() const;
    double getY() const;
    double getZ() const;

    static int getPointCount();
};

#endif 

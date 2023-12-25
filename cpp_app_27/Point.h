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

    inline void inputPointData();
    inline void displayPointData() const;
    inline void saveToFile(const std::string& filename) const;
    inline void loadFromFile(const std::string& filename);

    inline double getX() const { return x; }
    inline double getY() const { return y; }
    inline double getZ() const { return z; }

    static int getPointCount();
};

#endif 

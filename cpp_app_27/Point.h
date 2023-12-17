#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>

class Point {
private:
    static double x;
    static double y;
    static double z;

public:
    Point() = default;

    Point(double x, double y, double z);

    inline void inputCoordinates();
    inline void displayCoordinates() const;

    inline static double getX() { return x; }
    inline static double getY() { return y; }
    inline static double getZ() { return z; }

    inline static void saveToFile(const std::string& filename);
    inline static void loadFromFile(const std::string& filename);
};

#endif

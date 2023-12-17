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
    Point();
    Point(double x, double y, double z);

    void inputCoordinates();
    void displayCoordinates() const;

    static double getX();
    static double getY();
    static double getZ();

    static void saveToFile(const std::string& filename);
    static void loadFromFile(const std::string& filename);
};

#endif 

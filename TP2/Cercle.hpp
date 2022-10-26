#ifndef _cercle_h
#define _cercle_h

#include "Point.hpp";

class Cercle
{
public:
    // constructor
    Cercle(int diameter, Point center);

    // destructor
    ~Cercle();

    // getters
    inline int GetDiameter() const { return this->diameter; }
    inline Point GetCenter() const { return this->center; }

    // setters
    inline void SetDiameter(int diameter) { this->diameter = diameter; }
    inline void SetCenter(const Point &center) { this->center = center; }

    // methods
    float Perimeter() const;
    float Area() const;
    bool IsOnCirclePerimeter(const Point &point);
    bool IsInsideCircle(const Point &point);

    // Afficher
    void Afficher();

private:
    Point center;
    int diameter;
};

#endif
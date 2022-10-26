#include "Cercle.hpp"

#include <math.h>
#include <iostream>

// constructor & destructor
Cercle::Cercle(int diameter, Point center) : diameter(diameter)
{
    this->center.x = center.x;
    this->center.y = center.y;
}

Cercle::~Cercle()
{
}

// methods
float Cercle::Perimeter()
{
    return 2 * M_PI * (this->diameter / 2);
}

float Cercle::Area()
{
    return M_PI * pow(this->diameter / 2, 2);
}

bool Cercle::IsOnCirclePerimeter(const Point &point)
{
    return this->center.Distance(point) == (this->diameter / 2);
}

bool Cercle::IsInsideCircle(const Point &point)
{
    return this->center.Distance(point) < (this->diameter / 2);
}

// afficher
void Cercle::Afficher()
{
    std::cout << "" << std::endl;
}
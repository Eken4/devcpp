#include "Point.hpp"

#include <math.h>
#include <iostream>

float Point::Distance(const Point &point) const
{
    return sqrt(pow(this->x - point.x, 2) + pow(this->y - point.y, 2));
}

void Point::Afficher()
{
    std::cout << "Coordonnées :" << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

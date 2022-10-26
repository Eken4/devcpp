#include "Point.hpp"

#include <math.h>
#include <iostream>

float Point::Distance(const Point &point)
{
    return sqrt(pow(this->x - point.x, 2) + pow(this->y - point.y, 2));
}

void Point::Afficher()
{
    std::cout << "" << std::endl;
}

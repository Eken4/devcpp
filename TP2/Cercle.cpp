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
float Cercle::Perimeter() const
{
    return 2 * M_PI * (this->diameter / 2);
}

float Cercle::Area() const
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
    std::cout << "Diamètre: " << this->diameter << std::endl;
    std::cout << "Centre: " << std::endl;
    this->center.Afficher();
    std::cout << "Circonférence: " << this->Perimeter() << std::endl;
    std::cout << "Surface: " << this->Area() << std::endl;
}
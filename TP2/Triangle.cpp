#include "Triangle.hpp"

#include <math.h>
#include <iostream>
#include <array>

// constructor & destructor
Triangle::Triangle(Point a, Point b, Point c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

Triangle::~Triangle()
{
}

// methods
std::array<float, 3> Triangle::Sides() const
{
    std::array<float, 3> sides;

    sides[0] = this->a.Distance(this->b);
    sides[1] = this->a.Distance(this->c);
    sides[2] = this->b.Distance(this->c);

    return sides;
}

float Triangle::Base() const
{
    std::array<float, 3> sides = this->Sides();

    float longerSide = sides[0];

    for (int i = 1; i < 3; i++)
    {
        if (sides[i] > longerSide)
            longerSide = sides[i];
    }

    return longerSide;
}

float Triangle::Height() const
// calculer milieu de Base
{
    return (1);
}

float Triangle::Area() const
{
    return (this->Area() * this->Base()) / 2;
}

// Triangle type
bool Triangle::IsIsocele() const
{
    std::array<float, 3> sides = this->Sides();

    return (
        sides[0] == sides[1] || sides[0] == sides[2] || sides[1] == sides[2]);
}

bool Triangle::IsRectangle() const
// récupérer l'index de Base plutôt que tester toutes les combinaisons
{
    std::array<float, 3> sides = this->Sides();

    return (
        std::pow(sides[0], 2) == (std::pow(sides[1], 2) + std::pow(sides[2], 2)) ||
        std::pow(sides[1], 2) == (std::pow(sides[0], 2) + std::pow(sides[2], 2)) ||
        std::pow(sides[2], 2) == (std::pow(sides[1], 2) + std::pow(sides[0], 2)));
}

bool Triangle::IsEquilateral() const
{
    std::array<float, 3> sides = this->Sides();

    return (
        sides[0] == sides[1] &&
        sides[1] == sides[2] &&
        sides[2] == sides[0]);
}

// Afficher
void Triangle::Afficher()
{
    std::cout << "Sommet A :" << std::endl;
    this->a.Afficher();
    std::cout << "Sommet B :" << std::endl;
    this->b.Afficher();
    std::cout << "Sommet C :" << std::endl;
    this->c.Afficher();
    std::cout << "Longueur de la base: " << this->Base() << std::endl;
    if (this->IsIsocele())
        std::cout << "Ce triangle est isocèle" << std::endl;
    if (this->IsEquilateral())
        std::cout << "Ce triangle est équilatéral" << std::endl;
    if (this->IsRectangle())
        std::cout << "Ce triangle est rectangle" << std::endl;
}
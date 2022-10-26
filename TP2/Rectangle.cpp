#include "Rectangle.hpp"

#include <iostream>

// constructor & destructor

Rectangle::Rectangle(int length, int width) : length(length), width(width)
{
    this->upperLeftCorner.x = 0;
    this->upperLeftCorner.y = 0;
}

Rectangle::~Rectangle()
{
}

// methods

int Rectangle::Perimeter()
{
    return (this->length * 2) + (this->width * 2);
}

int Rectangle::Area()
{
    return this->length * this->width;
}

// Afficher
void Rectangle::Afficher()
{
    std::cout << "" << std::endl;
}
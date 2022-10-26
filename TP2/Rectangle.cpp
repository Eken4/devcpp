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

int Rectangle::Perimeter() const
{
    return (this->length * 2) + (this->width * 2);
}

int Rectangle::Area() const
{
    return this->length * this->width;
}

// Afficher
void Rectangle::Afficher()
{
    std::cout << "Longueur: " << this->length << std::endl;
    std::cout << "Largeur: " << this->width << std::endl;
    std::cout << "Coin supérieur gauche: " << std::endl;
    this->upperLeftCorner.Afficher();
    std::cout << "Périmètre: " << this->Perimeter() << std::endl;
    std::cout << "Surface: " << this->Area() << std::endl;
}
#ifndef _rectangle_h
#define _rectangle_h

#include "Point.hpp";

class Rectangle
{
public:
    // constructor
    Rectangle(int length, int width);
    
    // destructor
    ~Rectangle();

    // getters
    inline int GetLength() const { return this->length; }
    inline int GetWidth() const { return this->width; }
    inline Point GetUpperLeftCorner() const { return this->upperLeftCorner; }

    // setters
    inline void SetLength(int length) { this->length = length; }
    inline void SetWidth(int width) { this->width = width; }
    inline void SetUpperLeftCorner(const Point &upperLeftCorner) { this->upperLeftCorner = upperLeftCorner; }

    // methods
    int Perimeter();
    int Area();

    // Afficher
    void Afficher();

private:
    int length;
    int width;
    Point upperLeftCorner;
};

#endif
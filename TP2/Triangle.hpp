#ifndef _triangle_h
#define _triangle_h

#include "Point.hpp";

#include <array>

class Triangle
{
public:
    // constructor
    Triangle(Point a, Point b, Point c);
    // destructor
    ~Triangle();

    // getters
    inline Point GetA() const { return this->a; }
    inline Point GetB() const { return this->b; }
    inline Point GetC() const { return this->c; }

    // setters
    inline void SetA(const Point &p) { this->a = p; }
    inline void SetB(const Point &p) { this->b = p; }
    inline void SetC(const Point &p) { this->c = p; }

    //  methods
    std::array<float, 3> Sides();

    float Base();
    float Height();
    float Area();

    bool IsIsocele();
    bool IsRectangle();
    bool IsEquilateral();

    // afficher
    void Afficher();

private:
    Point a;
    Point b;
    Point c;
};

#endif
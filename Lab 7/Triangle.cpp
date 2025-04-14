#include "Triangle.hpp"

namespace shapes {

// Default constructor
Triangle::Triangle()
    : base(0.0), height(0.0)
{}

// Overloaded constructor
Triangle::Triangle(double b, double h)
    : base(b), height(h)
{}

// Destructor
Triangle::~Triangle() = default;

// Accessors
double Triangle::getBase() const {
    return base;
}

void Triangle::setBase(double b) {
    base = b;
}

double Triangle::getHeight() const {
    return height;
}

void Triangle::setHeight(double h) {
    height = h;
}

} // namespace shapes

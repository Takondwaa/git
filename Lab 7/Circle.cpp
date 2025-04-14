#include "Circle.hpp"

namespace shapes {

// Default constructor
Circle::Circle()
    : radius(0.0)
{}

// Overloaded constructor
Circle::Circle(double r)
    : radius(r)
{}

// Destructor
Circle::~Circle() = default;

// Accessors
double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

} // namespace shapes

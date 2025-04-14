#include "Square.hpp"

namespace shapes {

// Default constructor
Square::Square()
    : sideLength(0.0)
{}

// Overloaded constructor
Square::Square(double side)
    : sideLength(side)
{}

// Destructor
Square::~Square() = default;

// Accessors
double Square::getSideLength() const {
    return sideLength;
}

void Square::setSideLength(double side) {
    sideLength = side;
}

} // namespace shapes

#pragma once

#include "Square.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"

class Area {
public:
    // No member variables, no constructors

    // Static area calculators
    static double calculateArea(const shapes::Square& sq);
    static double calculateArea(const shapes::Triangle& tri);
    static double calculateArea(const shapes::Circle& cir);
};

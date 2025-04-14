#include "Area.hpp"
#include <cmath>

double Area::calculateArea(const shapes::Square& sq) {
    double s = sq.getSideLength();
    return s * s;
}

double Area::calculateArea(const shapes::Triangle& tri) {
    return 0.5 * tri.getBase() * tri.getHeight();
}

double Area::calculateArea(const shapes::Circle& cir) {
    double r = cir.getRadius();
    return M_PI * r * r;
}

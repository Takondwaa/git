#pragma once

namespace shapes {

class Circle {
private:
    double radius;

public:
    // Default constructor
    Circle();

    // Overloaded constructor
    explicit Circle(double r);

    // Destructor
    ~Circle();

    // Accessors
    double getRadius() const;
    void setRadius(double r);
};

} // namespace shapes

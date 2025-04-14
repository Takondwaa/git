#pragma once

namespace shapes {

class Triangle {
private:
    double base;
    double height;

public:
    // Default constructor
    Triangle();

    // Overloaded constructor
    Triangle(double b, double h);

    // Destructor
    ~Triangle();

    // Accessors
    double getBase() const;
    void setBase(double b);

    double getHeight() const;
    void setHeight(double h);
};

} // namespace shapes

#pragma once

namespace shapes {

class Square {
private:
    double sideLength;

public:
    // Default constructor
    Square();

    // Overloaded constructor
    explicit Square(double side);

    // Destructor
    ~Square();

    // Accessors
    double getSideLength() const;
    void setSideLength(double side);
};

} // namespace shapes

//Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    private:
    float length;
    float width;

    public:
    Rectangle();
    ~Rectangle();

    void setLength(float l);
    void setWidth(float w);

    float getLength() const;
    float getWidth() const;

    float calculateArea() const;
};

#endif
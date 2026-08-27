//
// Created by Kely Gbedemah on 8/26/26.
//

#ifndef RECTANGLEPROJECT_RECTANGLE_H
#define RECTANGLEPROJECT_RECTANGLE_H


class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle();
    Rectangle(double length, double width);
    void setLength(double length);
    void setWidth(double width);
    double getLength();
    double getWidth();
    double getArea();
};


#endif //RECTANGLEPROJECT_RECTANGLE_H

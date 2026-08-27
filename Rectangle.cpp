//
// Created by Kely Gbedemah on 8/26/26.
//

#include "Rectangle.h"
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}
Rectangle::Rectangle(double length, double width) {this->length = length; this->width = width;}
void Rectangle::setLength(double length) {
    if (length < 0) {
        this->length = 0.0;
    }
    else {
        this->length = length;
    }

}
void Rectangle::setWidth(double width) {
    if (width < 0) {
        this->width = 0.0;
    }
    else {
        this->width = width;
    }
}
double Rectangle::getLength() {
    return length;
}
double Rectangle::getWidth() {
    return width;
}
double Rectangle::getArea() {
    return (length * width);
}
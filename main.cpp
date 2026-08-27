#include <iostream>
#include "Rectangle.h"
int main() {
    Rectangle box(5.0, 3.0);
    std::cout << "Box 1 Length: " << box.getLength() << std::endl;
    std::cout << "Box 1 Width: " << box.getWidth() << std::endl;
    std::cout << "Box 1 Area: " << box.getArea() << std::endl;
    Rectangle box2(8.0, 4.0);
    std::cout << "Box 2 Length: " << box2.getLength() << std::endl;
    std::cout << "Box 2 Width: " << box2.getWidth() << std::endl;
    std::cout << "Box 2 Area: " << box2.getArea() << std::endl;
    box.setLength(-5.0);
    std::cout << box.getLength() << std::endl;
    box.setWidth(-3.0);
    std::cout << box.getWidth() << std::endl;
    return 0;
}
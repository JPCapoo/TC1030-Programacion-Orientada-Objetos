#include <iostream>

using namespace std;

#ifndef Polimorfismo_Shape_h
#define Polimorfismo_Shape_h

class Shape {
    private:
        int x;
        int y;

    public:
        Shape();
        Shape(int, int);
        virtual void draw();
        int getValueX();
        int getValueY();
};

Shape::Shape(){
    x = 0;
    y = 0;
};

Shape::Shape(int valX, int valY) {
    x = valX;
    y = valY;
};

int Shape::getValueX() {
    return x;
};

int Shape::getValueY() {
    return y;
};

void Shape::draw() {  // VIRTUAL only in declaration
    cout << "Soy una Figura" << endl;
};

#endif // Polimorfismo_Shape.h
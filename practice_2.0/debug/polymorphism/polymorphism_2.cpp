//this code have 5 mistakes, time limit 15 mins
#include <iostream>
using namespace std;

class Shape {
public:
    Shape(double length, double width) {
        this->length = length;
        this->width = width;
    }

    virtual double area() {
        return length * width;
    }

private:
    double length;
    double width;
};

class Circle : public Shape {
public:
    Circle(double radius) {
        this->radius = radius;
    }

    virtual double area() {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

int main() {
    Shape shape(5.0, 6.0);
    Circle circle(3.0);

    cout << "The area of the shape is " << shape.area() << endl;
    cout << "The area of the circle is " << circle.area() << endl;

    return 0;
}















































/*
1) The Shape class constructor should be declared as protected instead of public.

2) The Circle constructor should call the base class constructor to initialize the length and width.

3) The Shape class should declare its area method as virtual so that it can be overridden by derived classes.

4) The Circle class should use the constant value of pi instead of a hardcoded value in the area method.

5) The area method in the Circle class should use the radius member variable instead of the length and width variables inherited from the base class.



**** correct version ****

#include <iostream>
using namespace std;

class Shape {
protected:
    double length;
    double width;

public:
    Shape(double length, double width) {
        this->length = length;
        this->width = width;
    }

    virtual double area() {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : Shape(2 * radius, 2 * radius) {
        this->radius = radius;
    }

    virtual double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* shape = new Shape(5.0, 6.0);
    Circle* circle = new Circle(3.0);

    cout << "The area of the shape is " << shape->area() << endl;
    cout << "The area of the circle is " << circle->area() << endl;

    delete shape;
    delete circle;

    return 0;
}

*/

// ClassChallengeSubmissionAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

// Define M_PI(Had to define M_PI here as the editor did not recognize it)
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using std::cout;
using std::string;



//Superclass/Base Class/Perent Class
class Shape
{
protected:
    string color;//Will be inherited by subclasses

public:
    //Constructor
    Shape(string c) : color(c) {}

    //Virtual method to calculate area (overridden in subclasses)
    virtual double getArea() const = 0;//Virtual function makes Shape an abstract class

    //Method to display color
    void displayColor() const
    {
        cout << "Color: " << color << '\n';
    }
};

//Rectangle subclass/Child Class/Inherited class/Derived class(Will inherite from Parent class)
class Rectangle : public Shape
{
private:
    double height, width;

public:
    //Constructor
    Rectangle(string c, double h, double w) : Shape(c), height(h), width(w) {}

    //Override getArea method
    double getArea() const override
    {
        return height * width;
    }
};

//Triangle subclass/Child Class/Inherited class/Derived class(Will inherite from Parent class)
class Triangle : public Shape
{
private:
    double base, height;

public:
    //Constructor
    Triangle(string c, double b, double h) : Shape(c), base(b), height(h) {}

    //Override getArea method
    double getArea() const override
    {
        return 0.5 * base * height;
    }
};

//Circle subclass/Child Class/Inherited class/Derived class(Will inherite from Parent class)
class Circle : public Shape
{
private:
    double radius;

public:
    //Constructor
    Circle(string c, double r) : Shape(c), radius(r) {}

    //Override getArea method
    double getArea() const override
    {
        return M_PI * radius * radius;
    }
};

int main()
{
    //Instance shapes
    Rectangle rect("Brown", 10, 5);
    Triangle tri("Orange", 8, 6);
    Circle circ("Yellow", 4);

    //Display shape information & areas
    //Rectangle
    cout << "Rectangle Details: " << '\n';
    rect.displayColor();
    cout << "Area " << rect.getArea() << " square units" << '\n' << '\n';

    //Triangle
    cout << "Triangle Details: " << '\n';
    tri.displayColor();
    cout << "Area " << tri.getArea() << " square units" << '\n' << '\n';

    //Circle
    cout << "Circle Details: " << '\n';
    circ.displayColor();
    cout << circ.getArea() << " square units" << '\n' << '\n';

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

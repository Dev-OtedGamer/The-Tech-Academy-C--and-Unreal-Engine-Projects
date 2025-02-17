// OopSubmissionAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Object-Oriented Programming

#include <iostream>
#include <string>
using std::cout;
using std::string;

class Dog
{
public:
    //State/Structure
    string breed;
    string color;
    string height;
    int weight;

    //Constructor to initialize Dog object
    Dog(string b, string c, string h, int w)
    {
        breed = b;
        color = c;
        height = h;
        weight = w;
    }

    //Methods/Behavior
    void shake()
    {
        cout << breed << " is shaking paws!" << '\n';
    }

    void sit()
    {
        cout << breed << " is sitting!" << '\n';
    }

    void laydown()
    {
        cout << breed << " is laying down!" << '\n';
    }

    // Method to display dog details
    void displayInfo()
    {
        cout << "Breed: " << breed << '\n' << "Color: " << color << '\n' << "Height: " << height
            << '\n' << "Weight: " << weight << "pounds." << '\n' << '\n';
    }
        
};

int main()
{
    //Instance a Dog object that inherits all properties and methods from the class Dog
    Dog myDog("Hound", "Brown", "2 feet", 60);

    //Displays dog information
    myDog.displayInfo();

    //Perform behaviors
    myDog.shake();
    myDog.sit();
    myDog.laydown();

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

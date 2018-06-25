#include "shape.hpp"

#include <string>
#include <iostream>

using namespace std;

//------------------------------5.2 Shape Base Class-------------------------//

//Default Constructor 
Shape::Shape():
    name_{"default Shape"},
    color_{0.0f , 0.0f , 0.0f}
    {
        cout <<"\nDefault Shape Constructed\n";
    };

//User Defined Constructor taking in two parameters
Shape::Shape(std::string const& name , Color const& color):
    name_{name},
    color_{color}
    {
        cout << "\nConstructor Shape Constructed\n";
    };

//Destructor
Shape::~Shape()
    {
        cout << "\nShape has been Destructored\n";
    };


//------------------------------5.3 Implemeting Color and Name-------------------------//
//Getter Methods
Color Shape::getColor() const
    {
        return color_;
    }

std::string Shape::getName() const
    {
        return name_;
    }


//Printing the Object using the Ostream Library
std::ostream& Shape::print(std::ostream& os) const
{
    os << "\nThe Name of the Shape       : " << name_ << "\n" 
       << "The Color of the Shape      : " << color_ <<"\n"; 
    return os; 
}

// Overloading of the OStream operator to printt the Object 
std::ostream& operator<<(std::ostream& os, Shape const& s)
	{
		return s.print(os);
    }

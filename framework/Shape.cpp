#include "Shape.hpp"

#include <iostream>
using namespace std;


// default Constructor
Shape::Shape():
  name_ {"Default Shape"},
  color_{0.0f , 0.0f , 0.0f}
  {
      cout << "default Shape\n";
  };

// Constructor takes name 
Shape::Shape(std::string const& name, Color const& color): 
  name_{name},
  color_{color}
  {
      cout << "User Defined Constructor\n";
  };


// Destructor 
Shape::~Shape() 
  {
	 cout << "Shape-Destruction: "<<endl;
  };

//Getter  Methods
std::string Shape::getName() const 
  {
     return name_;
  }

Color Shape :: getColor() const
  {
      return color_;
  }


// prints shape object
std::ostream& Shape::print(std::ostream& os) const
  {
	os << "A New Shape called  : " << name_ << "\n" 
	   << "The RBG Color values: " << color_ << "\n";
		return os;
  }




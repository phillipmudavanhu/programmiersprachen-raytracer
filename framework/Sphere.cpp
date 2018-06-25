#include "Sphere.hpp"

#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;


// default Constructor
Sphere::Sphere():
  Shape{},
   ctr_{0.0 , 0.0 , 0.0}, 
   radius_{0.0f}
  {
      cout << "default Sphere\n";
  };

// Constructor takes name 
Sphere::Sphere(std::string const& name, Color const& color, glm::vec3 const& ctr, float const& radius): 
   Shape{ name, color },
   ctr_{0.0 , 0.0 , 0.0}, 
   radius_{0.0f}
  {
      cout << "User Defined Constructor for the Sphere\n";
  };

// Destructor 
Sphere::~Sphere() 
  {
	 cout << "Sphere is Destructed\n";
  };

//Getter  Methods
glm::vec3 const& Sphere::getCenter() const
    {
        return ctr_ ;
    }
float const& Sphere :: getRadius() const //
    {
        return radius_ ;
    }

//Pure Virtual Methodes the 
float Sphere :: area() const 
    {
    	float areaOfSphere = (4 * PI * radius_ * radius_ ); 
        return areaOfSphere;
    }

float Sphere :: volume() const
    {
        float volumeOfSphere = ( (4/3) * PI * radius_ * radius_ * radius_); 
        return volumeOfSphere;
    }

// prints shape object
std::ostream& Shape::print(std::ostream& os) const
  {
	os << "A New Shape called      : " << name_ << "\n" 
	   << "The RBG Color values    : " << color_ << "\n"
	   << "The AREA of the shape   : " << area() << "\n" 
	   << "The VOLUME of the shape : " << volume() << "\n"
	   << "The CENTER of the shape : " << "(" << cnt_.x <<","<< cnt_.y << ")" << "\n";
	return os;
  }




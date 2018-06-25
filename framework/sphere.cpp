#include "sphere.hpp"
#include "Ray.hpp"

#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>
#include <glm/vec3.hpp>

#include <iostream>
#include <math.h>
#include <string>

using namespace std;
const double PI = 3.14159265358979323846;

//------------------------------5.2 Shape Base Class-------------------------//

//Default Constructor
Sphere::Sphere():
    Shape{},
    center_{0.0 , 0.0 , 0.0}, 
    radius_{0.0f}
    {
        cout <<"A Default Sphere has been constructed\n";
    };

//User Defined Default Constructor that is Inheriting Shape Class(name, color)
Sphere::Sphere(glm::vec3 const& center , float const& radius , std::string const& name, Color const& color ): //radius ohne &const
    Shape{name , color},
    center_{center},
    radius_{radius}
    {
        cout << "A Sphere has been constructed\n";
    };


//Destructor for the Sphere
Sphere::~Sphere()
    {
        cout <<"A Sphere has been Deleted\n";
    };


//Getter Methods
glm::vec3 const& Sphere::getCenter() const
    {
        return center_ ;
    }

float const& Sphere::getRadius() const 
    {
        return radius_ ;
    }


//Area Method for calculating the Area of the Sphere
float Sphere::area() const  
    {
        return 4.0 * PI * radius_ * radius_; 
    }

//Volume Method for calculating the Volume of the Sphere
float Sphere::volume() const
    {
        return ((4.0f/3.0f) * PI * radius_ *radius_ *radius_);
    } 

//Overriding the Printing object Methode
std::ostream& Sphere::print(std::ostream& os ) const
    {
        Shape::print(os); //Using Base Shape for printing (name,color)
	os<<"The Center of the Sphere XYZ: (" 
	<< center_.x <<","<< center_.y << "," << center_.z <<
	") \nThe Radius of the Sphere XYZ: (" << radius_ << ")\n";
        return os;
    }

    //Overriding the Printing object Methode
	bool Sphere::intersect(Ray const& ray, float& distance) const
	{
  		return glm::intersectRaySphere(ray.origin,ray.direction, center_, radius_*radius_, distance); 
  	}


    

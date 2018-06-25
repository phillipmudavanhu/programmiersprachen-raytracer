#ifndef RAYTRACER_SHAPE_HPP
#define RAYTRACER_SHAPE_HPP


#include "color.hpp"
#include <iostream>
#include <string>

 //Base Class to be Inheritated
class Shape 
{

public:
	// Constructors
	Shape();
   	Shape(std::string const& name, Color const& color);
   	~Shape();

	// Getter
  std::string getName() const;
  Color getColor() const;

   //Virtual pure methods
   virtual void area() const = 0;
   virtual void volume() const = 0;
   virtual std::ostream& print(std::ostream& os) const;

private:
   std::string name_;
   Color color_; 
};

#endif //RAYTRACER_SHAPE_HPP
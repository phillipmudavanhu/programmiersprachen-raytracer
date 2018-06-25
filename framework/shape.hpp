#ifndef RAYTRACER_SHAPE_HPP
#define RAYTRACER_SHAPE_HPP

#include "color.hpp" 
#include <iostream>
#include <string>

class Shape 
{

public:

	//Base Class constructors
    Shape();
    Shape(std::string const& name , Color const& color);
    //virtual ~Shape();
    ~Shape();

   //pure Virtual Methodsto be overriden
    virtual float area() const = 0; 
    virtual float volume() const = 0; 
    virtual std::ostream& print(std::ostream& os) const;
    
    
    //Getters for the member variables
    Color getColor() const;
    std::string getName() const;



  //Variables to be inherited by all shapes
private:
    std::string name_;
    Color color_;


};

    std::ostream& operator<<(std::ostream& os , Shape const& s);

#endif //RAYTRACER_SHAPE_HPP


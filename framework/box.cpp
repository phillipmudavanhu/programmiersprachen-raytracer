#include "box.hpp"

#include <iostream>
#include <string>
#include <glm/vec3.hpp>

using namespace std;



Box::Box () :
    Shape(),
    min_{0.0 , 0.0 , 0.0},
    max_{0.0 , 0.0 , 0.0}
    {
        cout <<"A Default Box\n";
    };

Box::Box(glm::vec3 const& min  , glm::vec3 const& max , std::string const& name, Color const& color):
    Shape(name , color),
    min_{min},
    max_{max}
    {
        cout <<"A New Box\n";
    };

Box::~Box()
    {
        cout <<"Deleted the Box\n";
    };

glm::vec3 const& Box :: getMax() const 
    {
        return max_ ;
    }

glm::vec3 const& Box :: getMin() const
    {
        return min_ ;
    }

float Box :: area() const 
    {
        auto diff = max_ - min_;
        return 2*((diff.x*diff.y) + (diff.y*diff.z) + (diff.x*diff.z));
    }

float Box :: volume() const
    {
        auto diff = max_ - min_;
        return diff.x*diff.y*diff.z;
    }


    std::ostream& Box::print(std::ostream & os) const{
        Shape::print(os);

        os<< "min "
        <<min_.x<< ", "
        <<min_.y<< ", "
        <<min_.z<< ", " 
        <<std::endl<< "max "
        <<max_.x<< ", "
        <<max_.y<< ", "
        <<max_.z<< ". ";
    }




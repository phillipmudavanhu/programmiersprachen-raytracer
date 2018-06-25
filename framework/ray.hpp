#ifndef RAYTRACER_HPP
#define RAYTRACER_HPP

#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>

/*
struct Ray{

  //Default Constructor of the Ray Point of Origination its Direction
  Ray():
    origin_{},
    direction_{}
    {
      cout <<"Default Ray Point of Origination its Direction set\n";
    }


  ///User Defined Constructor of the Ray Point of Origination its Direction
  Ray(glm::vec3 const& origin, glm::vec3 const& direction):
    origin_{origin},
    direction_{glm::normalize(direction)}
    {
      cout <<"The Ray Point of Origination its Direction has been set\n";
    }


  glm::vec3 const& getOrigin() const{
    return origin_;
  }


  glm::vec3 const& getDirection() const{
    return direction_;
  }

  glm::vec3 origin_;
  glm::vec3 direction_;*/


#include <glm/vec3.hpp>

struct Ray
{

glm::vec3 origin = {0.0f, 0.0f, 0.0f };
glm::vec3 direction = {0.0f, 0.0f, -1.0f};

};

#endif //RAYTRACER_HPP
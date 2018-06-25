#ifndef RAYTRACER_SPHERE_HPP
#define RAYTRACER_SPHERE_HPP


#include "color.hpp"
#include "shape.hpp"

#include <glm/vec3.hpp>

class Sphere : public Shape {

public: 
  Sphere();
  Sphere(glm::vec3 const& ctr, float rad);
  Sphere(std::string const& name, Color const& color, glm::vec3 const& ctr, float const& radius); 
  
  //Override 
  ~Sphere() override; 
  float area() const override;
  float volume() const override;
  std::ostream& print(std::ostream& os) const override;

  //Getter Methods
  glm::vec3 const& getCenter() const;
  float const& getRadius() const;

  
private:
	glm::vec3 ctr_;
	float radius_;
};

#endif //RAYTRACER_SPHERE_HPP
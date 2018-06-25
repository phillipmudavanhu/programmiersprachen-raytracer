#ifndef RAYTRACER_SPHERE_HPP
#define RAYTRACER_SPHERE_HPP

#include "shape.hpp"
#include "Ray.hpp"

#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>
#include <glm/vec3.hpp>

#include <iostream>
#include <string>


class Sphere : public Shape
{

public:
    Sphere();
    Sphere(glm::vec3 const& center, float const& radius , std::string const& name, Color const& color); 
    ~Sphere();


	//Override Methodes in the Base Class Shape
    float area() const override; 
    float volume() const override;
	std::ostream& print(std::ostream& os) const override;


    //Getter Methods
     glm::vec3 const& getCenter() const;
     float const& getRadius() const;

	

    bool intersect (Ray const& ray, float& distance) const;

private:
    glm::vec3 center_ ;
    float radius_ ;

};




#endif // RAYTRACER_SPHERE_HPP 

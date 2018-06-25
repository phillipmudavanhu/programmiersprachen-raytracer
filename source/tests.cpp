#define CATCH_CONFIG_RUNNER

#include <catch.hpp>

#include <glm/vec3.hpp>
#include <cmath>
#include <string>

#include<glm/glm.hpp>
#include<glm/gtx/intersect.hpp>

#include "sphere.hpp"
#include "box.hpp"
#include "color.hpp"
#include "Ray.hpp"

// -----------------------------aufgabe 5.2--------------------------------------------

TEST_CASE("Testing the Box Default Constructor", "[aufgabe 2]") {
  
    std::cout << "\n----------------Aufgabe5.2: Box Constructor------------------\n";

    Box b0{};
    REQUIRE(b0.getMin().x == 0.0f);
    REQUIRE(b0.getMin().y == 0.0f);
    REQUIRE(b0.getMin().z == 0.0f);

    REQUIRE(b0.getMax().x == 0.0f);
    REQUIRE(b0.getMax().y == 0.0f);
    REQUIRE(b0.getMax().z == 0.0f);    

    REQUIRE(b0.getName() == "default Shape");

    REQUIRE(b0.getColor().r == 0.0f);
    REQUIRE(b0.getColor().b == 0.0f);
    REQUIRE(b0.getColor().g == 0.0f);

    REQUIRE(b0.volume() == Approx(0.0f));
    REQUIRE(b0.area() == Approx(0.0f));

    std::cout << "\n    \n";
}



//(center , radius , name, color ):
TEST_CASE("Box Constructor", "[aufgabe 2]"){
    std::cout << "\n-------------Aufgabe5.2: Box Constructor Test---------------\n";

    Box b1{ glm::vec3{-10,1.1f,1}, glm::vec3{-1,1.1f,1}, "box", Color{0.0f, 0.0f, 0.0f}};
    
    REQUIRE(b1.getMin().x == -10);
    REQUIRE(b1.getMin().y == 1.1f);
    REQUIRE(b1.getMin().z == 1);

    REQUIRE(b1.getMax().x == -1);
    REQUIRE(b1.getMax().y == 1.1f);
    REQUIRE(b1.getMax().z == 1);

    REQUIRE(b1.getName() == "box");

    REQUIRE(b1.getColor().r == 0.0f);
    REQUIRE(b1.getColor().b == 0.0f);
    REQUIRE(b1.getColor().g == 0.0f);

    REQUIRE(b1.area() == 0.0f);
    REQUIRE(b1.volume() == 0.0f);

   std::cout << "\n    \n";
}

//(center , radius , name, color )
TEST_CASE("Sphere Default Constructor", "[aufgabe 2]"){
    std::cout << "\n----------------Sphere Default Constructor-------------------\n";
    
    Sphere s0{};

    REQUIRE(s0.getCenter().x == 0.0);
    REQUIRE(s0.getCenter().y == 0.0);
    REQUIRE(s0.getCenter().z == 0.0);
    
    REQUIRE(s0.getRadius() == 0.0);
    
    REQUIRE(s0.getName() == "default Shape");

    REQUIRE(s0.getColor().r == 0.0f);
    REQUIRE(s0.getColor().b == 0.0f);
    REQUIRE(s0.getColor().g == 0.0f);

    REQUIRE(s0.volume() == Approx(0.0f));
    REQUIRE(s0.area() == Approx(0.0f));

    std::cout << "\n    \n";
}

//(center,  radius , name, color)
TEST_CASE("Sphere Constructor", "[aufgabe 2]"){
    std::cout << "\n----------------------Sphere Constructor---------------------\n";

    Sphere sphere{glm::vec3{1,-4,10}, {4.5}, "Sphere1", Color{23.0, 23.0, 23.0}};
    
    REQUIRE(sphere.getCenter().x == 1);
    REQUIRE(sphere.getCenter().y == -4);
    REQUIRE(sphere.getCenter().z == 10);

    REQUIRE(sphere.getRadius() == 4.5);

    REQUIRE(sphere.getName() == "Sphere1");

    REQUIRE(sphere.getColor().r == 23.0);
    REQUIRE(sphere.getColor().g == 23.0);
    REQUIRE(sphere.getColor().b == 23.0);

    std::cout << "\n    \n";

}


//(center , radius , name, color ):
TEST_CASE("Box Area and Volume of the Box", "[Aufgabe 2]"){
  std::cout << "\n-----------------Area and Volume of a Box---------------------\n";

  Box b3{glm::vec3{1,1,1}, glm::vec3{1,1,1}, "box3", Color{1.0, 1.0, 1.0}};
  
  REQUIRE(b3.area() ==0.0f);
  REQUIRE(b3.volume() == 0.0f);

  std::cout << "\n    \n";
}

//(center, radius , name, color);
TEST_CASE("The and Area Volume of the Sphere", "[Aufgabe 2]"){
  std::cout << "\n-----------------Area and Volume of a Sphere---------------------\n";

  Sphere s2{glm::vec3{-1,-3,4}, {24}, "sphere2", Color{11.0, 22.0, 33.0}};
  
  REQUIRE(s2.area() == 7238.22949f);
  REQUIRE(s2.volume() == 57905.83594f);

  std::cout << "\n    \n";
}

TEST_CASE("Printing the Box", "[Aufgabe 5]"){
  std::cout << "\n-----------------------Printing the Box---------------------------\n";


  Box b4{glm::vec3{8,4,2}, glm::vec3{8,0,6}, "box4", Color{11.0, 22.0, 11.0}};
  std::cout << b4;
  
   std::cout << "\n    \n";
}



TEST_CASE("Printing the Sphere", "[Aufgabe 5]"){
  std::cout << "\n-----------------------Printing the Box---------------------------\n";


  Sphere s3{glm::vec3{-1,-3,4}, {4}, "sphere3", Color{1.0, 2.0, 3.0}};
  std::cout << s3;
  
   std::cout << "\n    \n";
}


TEST_CASE("Sphere method intersect", "[Aufgabe 6]"){
  std::cout << "\n-----------------------Printing the Box---------------------------\n";

  glm::vec3 ray_origin{0.0 ,0.0 ,-2.0};
  glm::vec3 ray_direction{0.0 ,0.0 ,2.5};

  glm::vec3 sphere_center{0.0 ,0.0 ,4.0};
  float sphere_radius{1.0};
  float distance{0.0};

  Ray ray{ray_origin, ray_direction};
  Sphere sphere{ sphere_center, sphere_radius, "Beautiful Sphere", Color{0.0, 0.0, 0.0}};

  sphere.intersect(ray, distance);
  REQUIRE(distance == Approx(1.21595f));
  std::cout << "---------------------------------------\n";
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}




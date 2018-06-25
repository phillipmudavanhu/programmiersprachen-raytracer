#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

#include "../framework/Shape.hpp"

using namespace std;

//___________________________Aufgabe 5.1- Test________________________________//

/*
TEST_CASE("Testing the Shape Constructor" , "[Constructor]")
  {
    Shape shape1{};

	REQUIRE (shape1.getName()=="Default Shape");
    REQUIRE (shape1.getColor().r==0.0f);
    REQUIRE (shape1.getColor().g==0.0f);
    REQUIRE (shape1.getColor().b==0.0f);

  }*/


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

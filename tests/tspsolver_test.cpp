#include "catch.hpp"


TEST_CASE("Matrix constructor", "[constructor]")
{
  SECTION("Identity"){
   REQUIRE(1 == 1);
  }

  SECTION("Same Values"){
  REQUIRE(1 == 1);
  }

  SECTION("Initializer List"){
     REQUIRE(1 == 1);
  }
}

//
// Created by Jonathan Gerber on 1/17/17.
//

#include "TimeMe.hpp"
#include "catch.hpp"

SCENARIO("testing timeme") {
    GIVEN("a timeme instance") {
        TimeMe me{1000};
        THEN("lenght should be 1000")
            REQUIRE(me.getLength() == 1000);
    }
}
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_approx.hpp>
#include "../FindMax.h"

TEST_CASE("Vector of double")
{
    std::vector<double> vD{1.0, 2.0, 3.0};
    double maxValue;
    Less<double> compDouble;
    REQUIRE(FindMax(vD,maxValue, compDouble));
    REQUIRE(maxValue == Catch::Approx(3.0));
}

TEST_CASE("Empty vec")
{
    std::vector<int> vInt;
    int maxInt;
    Less<int> compInt;
    REQUIRE_FALSE(FindMax(vInt, maxInt, compInt));
}

TEST_CASE("Compare athletes by height")
{
    Athlete a1{"john", 180, 100};
    Athlete a2{"alex", 200, 300};
    std::vector<Athlete> vAth{a1, a2};
    Athlete maxHeightAth;
    AthleteHeightComparator hComp;
    REQUIRE(FindMax(vAth, maxHeightAth, hComp));
    REQUIRE(maxHeightAth.height == 200);
}

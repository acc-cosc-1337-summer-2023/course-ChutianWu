#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test max value of vector with values 5,7,-1,99,-100,10")
{
	vector<int> nums1{5, 7, -1, 99, -100, 10};
	REQUIRE(get_vector_max_value(nums1) == 99);
}

TEST_CASE("Test max value of vector with values -50,0,-51,50,-99,-100")
{
	vector<int> nums1{-50, 0, -51, 50, -99, -100};
	REQUIRE(get_vector_max_value(nums1) == 50);
}

TEST_CASE("Test square value of vector with values 3,7,2,5,10")
{
	vector<int> nums2{3, 7, 2, 5, 10};
	vector<int> result{9, 49, 4, 25, 100};
	REQUIRE(get_square_of_each_element(nums2) == result);
}

TEST_CASE("Test square value of vector with values 6,1,8,9,4")
{
	vector<int> nums2{6, 1, 8, 9, 4};
	vector<int> result{36, 1, 64, 81, 16};
	REQUIRE(get_square_of_each_element(nums2) == result);
}
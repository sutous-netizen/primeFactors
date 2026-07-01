#include "gmock/gmock.h"
#include "prime.cpp"

using namespace testing;

class PrimeFixture : public Test {
public:
	PrimeFactors primefacot;
	vector<int> expected;
};

TEST_F(PrimeFixture, of1) {
	expected = {};
	EXPECT_EQ(expected, primefacot.of(1));
}
TEST_F(PrimeFixture, of2) {
	expected = {2};
	EXPECT_EQ(expected, primefacot.of(2));
}
TEST_F(PrimeFixture, of3) {
	expected = { 3 };
	EXPECT_EQ(expected, primefacot.of(3));
}
TEST_F(PrimeFixture, of4) {
	expected = { 2,2 };
	EXPECT_EQ(expected, primefacot.of(4));
}
TEST_F(PrimeFixture, of6) {
	expected = { 2,3 };
	EXPECT_EQ(expected, primefacot.of(6));
}
TEST_F(PrimeFixture, of9) {
	expected = { 3,3 };
	EXPECT_EQ(expected, primefacot.of(9));
}
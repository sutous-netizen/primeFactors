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
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
TEST_F(PrimeFixture, of12) {
	expected = { 2,2,3 };
	EXPECT_EQ(expected, primefacot.of(12));
}
TEST_F(PrimeFixture, of5) {
	expected = { 5 };
	EXPECT_EQ(expected, primefacot.of(5));
}
TEST_F(PrimeFixture, of7) {
	expected = { 7 };
	EXPECT_EQ(expected, primefacot.of(7));
}
TEST_F(PrimeFixture, of8) {
	expected = { 2,2,2 };
	EXPECT_EQ(expected, primefacot.of(8));
}
TEST_F(PrimeFixture, of16) {
	expected = { 2,2,2,2 };
	EXPECT_EQ(expected, primefacot.of(16));
}
TEST_F(PrimeFixture, of27) {
	expected = { 3,3,3 };
	EXPECT_EQ(expected, primefacot.of(27));
}
TEST_F(PrimeFixture, of30) {
	expected = { 2,3,5 };
	EXPECT_EQ(expected, primefacot.of(30));
}
TEST_F(PrimeFixture, of100) {
	expected = { 2,2,5,5 };
	EXPECT_EQ(expected, primefacot.of(100));
}
TEST_F(PrimeFixture, of210) {
	expected = { 2,3,5,7 };
	EXPECT_EQ(expected, primefacot.of(210));
}
TEST_F(PrimeFixture, of360) {
	expected = { 2,2,2,3,3,5 };
	EXPECT_EQ(expected, primefacot.of(360));
}
TEST_F(PrimeFixture, of97) {
	expected = { 97 };
	EXPECT_EQ(expected, primefacot.of(97));
}
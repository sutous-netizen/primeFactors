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

// 경계값: 1보다 작은 입력은 소인수 없음
TEST_F(PrimeFixture, of0) {
	expected = {};
	EXPECT_EQ(expected, primefacot.of(0));
}
TEST_F(PrimeFixture, ofNegative1) {
	expected = {};
	EXPECT_EQ(expected, primefacot.of(-1));
}
TEST_F(PrimeFixture, ofNegative6) {
	expected = {};
	EXPECT_EQ(expected, primefacot.of(-6));
}

// 큰 소수
TEST_F(PrimeFixture, of997) {
	expected = { 997 };
	EXPECT_EQ(expected, primefacot.of(997));
}

// 소수의 제곱
TEST_F(PrimeFixture, of25) {
	expected = { 5,5 };
	EXPECT_EQ(expected, primefacot.of(25));
}
TEST_F(PrimeFixture, of49) {
	expected = { 7,7 };
	EXPECT_EQ(expected, primefacot.of(49));
}

// 높은 거듭제곱
TEST_F(PrimeFixture, of32) {
	expected = { 2,2,2,2,2 };
	EXPECT_EQ(expected, primefacot.of(32));
}
TEST_F(PrimeFixture, of1024) {
	expected = { 2,2,2,2,2,2,2,2,2,2 };
	EXPECT_EQ(expected, primefacot.of(1024));
}
TEST_F(PrimeFixture, of125) {
	expected = { 5,5,5 };
	EXPECT_EQ(expected, primefacot.of(125));
}

// 두 큰 소수의 곱 (세미프라임)
TEST_F(PrimeFixture, of143) {
	expected = { 11,13 };
	EXPECT_EQ(expected, primefacot.of(143));
}

// 큰 합성수
TEST_F(PrimeFixture, of1000) {
	expected = { 2,2,2,5,5,5 };
	EXPECT_EQ(expected, primefacot.of(1000));
}
TEST_F(PrimeFixture, of2310) {
	expected = { 2,3,5,7,11 };
	EXPECT_EQ(expected, primefacot.of(2310));
}
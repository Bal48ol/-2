#include "pch.h"
#include "../ЭВМ Лаба 2/Source.cpp"

//№1 индексация
TEST(MinIndex, test1)
{
	EXPECT_EQ(MinIndex({1, 2, 3}), 0);
}

TEST(MinIndex, test2)
{
	EXPECT_EQ(MinIndex({5, 2, 6, 1, 4}), 3);
}

TEST(MinIndex, test3)
{
	EXPECT_EQ(MinIndex({ }), 0);
}

//№1 итерация
TEST(MinIndex_iterator, test4)
{
	EXPECT_EQ(MinIndex_iterator({1, 2, 3}), 0);
}

TEST(MinIndex_iterator, test5)
{
	EXPECT_EQ(MinIndex_iterator({5, 2, 6, 1, 4}), 3);
}

TEST(MinIndex_iterator, test6)
{
	EXPECT_EQ(MinIndex_iterator({ }), 0);
}

//№3 индексация
TEST(palindrom, test7)
{
	EXPECT_EQ(palindrom({1, 2, 3, 2, 1}), 1);
}

TEST(palindrom, test8)
{
	EXPECT_EQ(palindrom({5, 2, 6, 1, 4}), 0);
}

TEST(palindrom, test9)
{
	EXPECT_EQ(palindrom({1}), 1);
}

TEST(palindrom, test10)
{
	EXPECT_EQ(palindrom({ }), 1);
}

//№3 итерация
TEST(palindrom_iterator, test11)
{
	EXPECT_EQ(palindrom_iterator({5, 2, 6, 1, 4}), 0);
}

TEST(palindrom_iterator, test12)
{
	EXPECT_EQ(palindrom_iterator({1, 2, 3, 2, 1}), 1);
}

TEST(palindrom_iterator, test13)
{
	EXPECT_EQ(palindrom_iterator({1}), 1);
}

TEST(palindrom_iterator, test14)
{
	EXPECT_EQ(palindrom_iterator({ }), 1);
}

//№2 
TEST(Array, test15)
{
	EXPECT_EQ(Array({4}), std::vector<int>({5, 29, 86, 190}));
}

TEST(Array, test16)
{
	EXPECT_EQ(Array({1}), std::vector<int>({5}));
}

TEST(Array, test17)
{
	EXPECT_EQ(Array({0}), std::vector<int>({ }));
}

TEST(Array, test18)
{
	EXPECT_EQ(Array({-587}), std::vector<int>({ }));
}

//№4
TEST(dna, test19)
{
	EXPECT_EQ(dna("С"), std::vector<int>({0}));
}

TEST(dna, test20)
{
	EXPECT_EQ(dna("CG"), std::vector<int>({0, -1}));
}

TEST(dna, test21)
{
	EXPECT_EQ(dna("CGC"), std::vector<int>({0, -1, 0}));
}

TEST(dna, test22)
{
	EXPECT_EQ(dna("ATATT"), std::vector<int>({0, 0, 0, 0, 0}));
}
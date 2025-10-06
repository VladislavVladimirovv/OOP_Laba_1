#include "../include/main.h"
#include <gtest/gtest.h>

TEST(TurkishConversionTest, SingleDigitNumbers)
{
    EXPECT_EQ(convert_Turkish(0), "sıfır");
    EXPECT_EQ(convert_Turkish(1), "bir");
    EXPECT_EQ(convert_Turkish(2), "iki");
    EXPECT_EQ(convert_Turkish(3), "üç");
    EXPECT_EQ(convert_Turkish(4), "dört");
    EXPECT_EQ(convert_Turkish(5), "beş");
    EXPECT_EQ(convert_Turkish(6), "altı");
    EXPECT_EQ(convert_Turkish(7), "yedi");
    EXPECT_EQ(convert_Turkish(8), "sekiz");
    EXPECT_EQ(convert_Turkish(9), "dokuz");
}

TEST(TurkishConversionTest, RoundNumbers)
{
    EXPECT_EQ(convert_Turkish(10), "on");
    EXPECT_EQ(convert_Turkish(20), "yirmi");
    EXPECT_EQ(convert_Turkish(30), "otuz");
    EXPECT_EQ(convert_Turkish(40), "kırk");
    EXPECT_EQ(convert_Turkish(50), "elli");
    EXPECT_EQ(convert_Turkish(60), "altmış");
    EXPECT_EQ(convert_Turkish(70), "yetmiş");
    EXPECT_EQ(convert_Turkish(80), "seksen");
    EXPECT_EQ(convert_Turkish(90), "doksan");
}

TEST(TurkishConversionTest, CompositeNumbers)
{
    EXPECT_EQ(convert_Turkish(11), "on bir");
    EXPECT_EQ(convert_Turkish(23), "yirmi üç");
    EXPECT_EQ(convert_Turkish(47), "kırk yedi");
    EXPECT_EQ(convert_Turkish(55), "elli beş");
    EXPECT_EQ(convert_Turkish(68), "altmış sekiz");
    EXPECT_EQ(convert_Turkish(99), "doksan dokuz");
}

TEST(TurkishConversionTest, EdgeCases)
{
    EXPECT_EQ(convert_Turkish(0), "sıfır");
    EXPECT_EQ(convert_Turkish(99), "doksan dokuz");
    EXPECT_EQ(convert_Turkish(-1), "Указано недопустимое значение");
    EXPECT_EQ(convert_Turkish(100), "Указано недопустимое значение");
}

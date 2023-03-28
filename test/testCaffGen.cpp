#include "gtest/gtest.h"
#include "../lib/CaffGenerator.h"

TEST(caffGenTest, testVectorEqual)
{
    vector <string> empty = {};
    CaffGenerator *generator1 = new CaffGenerator();
    bool listAdd = true;
    generator1->generateList(&empty, &listAdd);
    EXPECT_GT(empty.size(), 0);
}
TEST(caffGenTest, testVectorEqualTo)
{
    vector <string> empty = {};
    CaffGenerator *generator2 = new CaffGenerator();
    bool listAdd = true;
    generator2->generateList(&empty, &listAdd);
    EXPECT_GE(empty.size(), 0);
}
TEST(caffGenTest, testVectorEqualThrow)
{
    vector <string> empty = {};
    CaffGenerator *generator3 = new CaffGenerator();
    bool listAdd = true;
    EXPECT_NO_THROW(generator3->generateList(&empty, &listAdd));
}

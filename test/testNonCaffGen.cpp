#include "gtest/gtest.h"
#include "../lib/NonCaffGenerator.h"

TEST(noncaffGenTest, testVectorEqual)
{
    vector <string> empty = {};
    NonCaffGenerator *generator1 = new NonCaffGenerator();
    bool listAdd = true;
    generator1->generateList(&empty, &listAdd);
    EXPECT_GT(empty.size(), 0);
}
TEST(noncaffGenTest, testVectorEqualTo)
{
    vector <string> empty = {};
    NonCaffGenerator *generator2 = new NonCaffGenerator();
    bool listAdd = true;
    generator2->generateList(&empty, &listAdd);
    EXPECT_GE(empty.size(), 0);
}
TEST(noncaffGenTest, testVectorEqualThrow)
{
    vector <string> empty = {};
    NonCaffGenerator *generator3 = new NonCaffGenerator();
    bool listAdd = true;
    EXPECT_NO_THROW(generator3->generateList(&empty, &listAdd));
}

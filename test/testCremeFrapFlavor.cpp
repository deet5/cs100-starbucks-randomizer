#include "gtest/gtest.h"
#include "../lib/CremeFrappuccinoFlavor.h"
#include "../lib/HotChocolate.h"

// TEST(CremFrapTest, getsName)
// {
   
//}
TEST(CremFrapTest,constructor)
{
    HotChocolate *hot1 = new HotChocolate();
    EXPECT_NO_THROW(CremeFrappuccinoFlavor *creme21 = new CremeFrappuccinoFlavor(hot1));
}
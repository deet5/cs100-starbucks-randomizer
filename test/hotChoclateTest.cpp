#include "../lib/HotChocolate.h"
#include <string>

#include "gtest/gtest.h"

TEST(HCTEST, NameTest1){
   HotChocolate hotChocolate1;
   EXPECT_EQ(hotChocolate1.getName(), "Hot Chocolate");
}

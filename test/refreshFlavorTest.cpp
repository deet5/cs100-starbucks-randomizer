#include "../lib/RefresherFlavor.h"
#include <string>
#include "../lib/HotChocolate.h"
#include "../lib/Drink.h"
#include "gtest/gtest.h"

TEST(RefreshFlavorTest,constructor)
{
    HotChocolate *hot3 = new HotChocolate();
    EXPECT_NO_THROW(RefresherFlavor *refresh5 = new RefresherFlavor(hot3));
}

#include "../lib/CoffeeSyrup.h"
#include "../lib/Drink.h"
#include "../lib/Americano.h"

#include <string>
#include <cstdlib>
#include <ctime>
#include "gtest/gtest.h"

TEST(CSyrupNameTest, CSyrupConstructor1){

	Americano *coffee1 = new Americano(true, 2);	
	EXPECT_NO_THROW(CoffeeSyrup *syrup3 = new CoffeeSyrup(coffee1));
}

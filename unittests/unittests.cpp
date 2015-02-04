#include<gtest\gtest.h>
#include"tgaimage.h"
#include "model.hpp"

// Tests TGAImage().
TEST(TGAImageTest, TGAImage1) 
{
	Model *model = NULL;
	model = new Model("www");

	EXPECT_EQ(0u, 1);
}
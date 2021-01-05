#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"

TEST(CharacterTests, CharacterConstructors){
    Character* chartest1 = new Character();
    Mario* mariotest1 = new Mario(2.5, 10);
    Yoshi* yoshitest1 = new Yoshi(4, 20, 2);

    ASSERT_EQ(chartest1->WhatAmI(), std::string("A character has no name"));
    ASSERT_EQ(mariotest1->WhatAmI(), std::string("It's-a Me , Mario"));
    ASSERT_EQ(yoshitest1->crests(), 2);
    ASSERT_EQ(yoshitest1->WhatAmI(), std::string("It's-a me, Yoshi with 2 crests"));
    ASSERT_LT(mariotest1->speed(), yoshitest1->speed());

    mariotest1->Accelerate();
    yoshitest1->Break();
    ASSERT_GT(mariotest1->speed(), yoshitest1->speed());


    delete chartest1;
    delete mariotest1;
    delete yoshitest1;
}
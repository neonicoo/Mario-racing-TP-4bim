#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"

TEST(CharacterTests, CharacterConstructors){
    Character* chartest1 = new Character();
    Mario* mariotest1 = new Mario();
    Yoshi* yoshitest1 = new Yoshi(2);

    ASSERT_EQ(chartest1->WhatAmI(), std::string("A character has no name"));
    ASSERT_EQ(mariotest1->WhatAmI(), std::string("It's-a Me , Mario"));
    ASSERT_EQ(yoshitest1->crests(), 2);
}
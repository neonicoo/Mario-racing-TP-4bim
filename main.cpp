#include <cstdlib>
#include <vector>
#include "Character.h"

int main(){

    Character perso (5.0,10.0);
    std::cout << perso.WhatAmI() << std::endl;

    return 0 ;
}
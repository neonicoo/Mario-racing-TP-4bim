#include <cstdlib>
#include <vector>
#include "Mario.h"

int main(){

    Character perso (5.0,10.0);
    std::cout << perso.WhatAmI() << std::endl;

    Mario mario(7.0,25.0);
    std::cout << mario.WhatAmI() << std::endl;
    std::cout << "Vitesse mario : " << mario.speed() << std::endl ;

    mario.Accelerate();
    std::cout << "Vitesse mario apres acceleration  : " << mario.speed() << std::endl ;
    
    return 0 ;
}
#include "Character.h"

class Mario : public Character{
    public:
        Mario();
        Mario(float speed, float max_speed);
        virtual std::string WhatAmI() const override ;

        ~Mario() = default;
};
#include "Yoshi.h"

Yoshi::Yoshi():Character(){
    this->crests_= 1;
};

Yoshi::Yoshi(float speed, float max_speed):Character(speed, max_speed)
{
};

void Yoshi::set_crests(int new_crests){
    this->crests_=new_crests;
};

std::string Yoshi::WhatAmI() const{
    return "It's-a me, Yoshi, crests : " + std::to_string(this->crests_);
};

void Yoshi::Accelerate(){
    if (this->speed_ != this->max_speed_){
         this->speed_ += 2;
    }else{
        this->speed_ = this->max_speed_;
    }
};
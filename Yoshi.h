#include "Character.h"

class Yoshi : public Character{

    protected:
        int crests_;

    public:
        Yoshi();
        Yoshi(float speed, float max_speed);
        void set_crests(int new_crests);

        virtual std::string WhatAmI() const override;
        virtual void Accelerate() override ;
    
        inline int crests() const{
            return this->crests_;
        }

        
        ~Yoshi() = default;
};
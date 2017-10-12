//*************************************
// File:   elChapoWeapon.h
// Author: Carla Pastor. Fall 2017
//*************************************
#include <iostream>
#include <string>
#include "Weapon.h"

#ifndef ELCHAPOWEAPON_H
#define ELCHAPOWEAPON_H


class elChapoWeapon: public Weapon {
public:


    elChapoWeapon() : Weapon("El Chapo Weapon", 100) {
    }
    virtual ~elChapoWeapon() {}; 
    virtual double hit(double armor);

};
#endif // ELCHAPOWEAPON_H


//*************************************
// File:   CrazyRandomSword.h
// Author: Carla Pastor. Fall 2017
//*************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

//  hitpoints = random integer number between 10 and 100.
// Ignores a random amount of integer armor points, ranging from to 0 to
//half of the armor the weapon hits.

class CrazyRandomSword: public Weapon {
public:

	//srand(time(0));
    
    int val =  (rand() % 100 + 10);

    CrazyRandomSword() : Weapon("Crazy Random Sword", val) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};
#endif // CRAZYRANDOMSWORD_H


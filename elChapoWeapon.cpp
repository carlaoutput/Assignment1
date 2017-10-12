//*************************************
// File:   elChapoWeapon.cpp
// Author: Carla Pastor. Fall 2017
//*************************************
#include "elChapoWeapon.h"

double elChapoWeapon::hit(double armor)
{
	double damage = 0;

	if (armor < 90)
	{
	hitPoints = hitPoints - 1;
    damage = hitPoints + 100; // BOOM! all dead!

	}
	else
	{
		damage = hitPoints;
	}
	
    if (damage < 0) 
	{
        return 0;
    }
    return damage;
}






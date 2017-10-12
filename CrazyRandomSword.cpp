//*************************************
// File:   CrazyRandomSword.cpp
// Author: Carla Pastor. Fall 2017
//*************************************
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
	double damage = 0;
	
	if (armor < 90)
	{
		
    double damage = hitPoints + 100; // BOOM! all dead!
	}
	else
	{
		double damage = hitPoints;
	}
	
    if (damage < 0) 
	{
        return 0;
    }
    return damage;
}

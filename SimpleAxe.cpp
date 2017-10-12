//*************************************
// File:   SimpleAxe.cpp
// Author: Carla Pastor. Fall 2017
//*************************************

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor)
{
	double damage = 0;

	if (armor > 0 && armor < 20)
	{
		
    double damage = hitPoints;
	}
	else
	{
		double damage = hitPoints - armor;
	}
    if (damage < 0) 
	{
        return 0;
    }
    return damage;
}

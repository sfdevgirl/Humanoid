/*
 * Humanoid.cpp
 *
 *  Created on: Oct 18, 2016
 *      Author: linuxuser
 */

#include "Humanoid.hpp"

Humanoid::Humanoid() {
	// TODO Auto-generated constructor stub
	 height = 0; //inches
			weight = 0; //lbs
			eyeColor= " ";
			gender= 'x';
			numArms = 2;
		numLegs =2;
}

Humanoid::~Humanoid() {
	// TODO Auto-generated destructor stub
	cout << "You are killing a human\n";
}



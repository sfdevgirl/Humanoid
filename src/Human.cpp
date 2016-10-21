/*
 * Human.cpp
 *
 *  Created on: Oct 18, 2016
 *      Author: linuxuser
 */

#include "Human.hpp"


Human::Human() {
	// TODO Auto-generated constructor stub
			height = 0;
			weight = 0; //lbs
			eyeColor = " ";
			gender = 'x';
			numArms = 2;
			numLegs = 2;
}

Human::~Human() {
	// TODO Auto-generated destructor stub
}

string Human::whoami(){
	return "Human";
}




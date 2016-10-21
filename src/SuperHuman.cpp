/*
 * superHuman.cpp
 *
 *  Created on: Oct 18, 2016
 *      Author: linuxuser
 */
#include "SuperHuman.hpp"




SuperHuman::SuperHuman() {
	// TODO Auto-generated constructor stub
		height = 0;
		weight = 0; //lbs
		eyeColor = " ";
		gender = 'x';
		numArms = 2;
		numLegs = 2;


}

SuperHuman::~SuperHuman() {
	// TODO Auto-generated destructor stub
	cout << "You are killing a superhuman\n";
}

bool SuperHuman::fly(void){
	bool returnValue = true;
	cout << "Weeeeeeee! I'm flying\n";
	return  returnValue;
}

string SuperHuman::whoami(){
	return "SuperHuman";
}



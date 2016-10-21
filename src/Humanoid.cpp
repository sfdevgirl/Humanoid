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

void Humanoid::fight(Humanoid *a, Humanoid *b){
//	if(newEvilHuman->getRank() > newGoodHuman->getRank()){
//				cout << "True\n";
//			}
	if (a->getRank() > b->getRank()){
		cout << a->whoami() << " has killed " << b->whoami() << endl;
	}//if
	else if (a->getRank() < b->getRank()){
		cout << b->whoami() << " has killed " << a->whoami() << endl;
	}//else if
	else if ( a->getRank() == b->getRank()){
		cout << "No fight here!\n";
	}
}

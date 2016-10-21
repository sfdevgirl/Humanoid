/*
 * EvilHuman.cpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#include "EvilHuman.hpp"

EvilHuman::EvilHuman() {
	// TODO Auto-generated constructor stub
	rank = 1;
		//3. evil super human 2. good super 1. evil human 0. good human
}

EvilHuman::~EvilHuman() {
	// TODO Auto-generated destructor stub
}

string EvilHuman::whoami(){

	return "EvilHuman";
}

int EvilHuman::getRank(){
	return rank;
}

//void EvilHuman::evilAct(Humanoid * a){
//	if (a->whoami() == whoami() ){
//		cout << "No fight here\n";
//	}
//
//}


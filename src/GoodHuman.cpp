/*
 * GoodHuman.cpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#include "GoodHuman.hpp"

GoodHuman::GoodHuman() {
	// TODO Auto-generated constructor stub
	rank = 0;
}

GoodHuman::~GoodHuman() {
	// TODO Auto-generated destructor stub
}

string GoodHuman::whoami(){

	return "GoodHuman";
}
int GoodHuman::getRank(){
	return rank;
}

void GoodHuman::goodAct(){

}

/*
 * EvilSuper.cpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#include "EvilSuper.hpp"

EvilSuper::EvilSuper() {
	// TODO Auto-generated constructor stub
	rank = 3;
}

EvilSuper::~EvilSuper() {
	// TODO Auto-generated destructor stub
}

string EvilSuper::whoami(){
	return "EvilSuper";
}

int EvilSuper::getRank(void){
	return rank;
}
